# SampleOMXILCompEnum
Sample OpenMAX IL component enumeration. Use Bellagio on Ubuntu x86 computer.

## How to set up
Install OpenMAX IL and Bellagio.
###### ~$ sudo apt-get install libomxil-*

## How to clone
###### ~$ git clone https://github.com/ArtisteHsu/SampleOMXILCompEnum.git

## How to build
###### ~$ cd SampleOMXILCompEnum
###### ~/SampleOMXILCompEnum$ gcc -o compenum compenum.c /usr/lib/libomxil-bellagio.a -ldl

## How to run
###### ~/SampleOMXILCompEnum$ ./compenum
