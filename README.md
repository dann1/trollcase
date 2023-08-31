# Trollcase

A C++ CLI application that alters the casing of a given string

[![CMake build](https://github.com/dann1/trollcase/actions/workflows/cmake-multi-platform.yml/badge.svg)](https://github.com/dann1/trollcase/actions/workflows/cmake-multi-platform.yml)

## Usage

`trollcase <text_to_troll> --random/--alternate/--interactive`

Example

```
trollcase "Is it compatible with AE ? Thanks"
iS IT COMPATIbLe wITh AE ? thAnKs
```

## Features

The casing is separated into a library that can be included by other cpp apps. Casing methods

- random
- alternate
