#! /bin/bash
find . -type f,d | wc -l | sed "s/[[:blank:]]//g"
