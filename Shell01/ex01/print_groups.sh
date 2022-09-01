#! /bin/bash
id -Gn $FT_USER | sed "s![[:blank:]]!,!g"
