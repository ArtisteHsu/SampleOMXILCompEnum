#include <stdio.h>
#include <OMX_Core.h>

int main(void) {
	int i;	
	OMX_ERRORTYPE eError;
	char szCompEnumName[OMX_MAX_STRINGNAME_SIZE];

	printf("\n%s:%s()\n\n", __FILE__, __func__);

	// Initial OpenMAX before any call of OpenMAX
	eError = OMX_Init();
	if (eError != OMX_ErrorNone) {
		printf("OMX_Init() fails (err = 0x%08X)\n", eError);
	} else {
		printf("OMX_Init() success (err = 0x%08X)\n", eError);
	}

	// Enumerate OpenMAX IL components by name
	i = 0; // Index for enumeration
	do {
		eError = OMX_ComponentNameEnum(szCompEnumName, OMX_MAX_STRINGNAME_SIZE, i);
		if (eError == OMX_ErrorNone) {
			printf("OMX_ComponentNameEnum() index %d - %s\n", i, szCompEnumName);
			i++;
		} else {
			printf("OMX_ComponentNameEnum() ends up in index %d (err = 0x%08X)\n", i, eError);
			break;
		}
	} while (1);

	// Deinit OpenMAX after finish all OpenMAX operation
	eError = OMX_Deinit();
	printf("OMX_Deinit() returns (0x%08X)\n", eError);
	return eError;
}
