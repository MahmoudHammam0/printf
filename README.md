# printf

### 0x11. C - printf

A custom implementation of the standard `printf` function in C.

## Overview

`_printf` is a simplified version of the C standard library's `printf`, written from scratch. It formats and prints data to the standard output based on a format string and variable arguments.

This version supports characters, strings, integers (both signed and unsigned), binary, octal, hexadecimal (lower and upper case), and pointers. It also includes support for printing special strings where non-printable characters are shown in hexadecimal.

Designed to mimic `printf` behavior as closely as possible, with custom parsing and output logic.

## Supported Format Specifiers

- `%c` — character  
- `%s` — string  
- `%%` — percent sign  
- `%d`, `%i` — signed integers  
- `%u` — unsigned integers  
- `%b` — binary representation  
- `%o` — octal  
- `%x`, `%X` — hexadecimal (lower/upper case)  
- `%p` — pointer address  
- `%S` — string with non-printable characters as `\x` values

## File Structure

![Files mind map](./_printf%20Mind%20Map.png)

## Authors

- Mahmoud Hammam - [Github](https://github.com/MahmoudHammam0) / [Linkedin](https://www.linkedin.com/in/mahmoud-hammam-/)
- Youssef El Ghamour - [Github](https://github.com/youssefelghamour) / [Linkedin](https://www.linkedin.com/in/youssefelghamour/)