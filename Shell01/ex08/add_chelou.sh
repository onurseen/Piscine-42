#! /bin/bash
echo $FT_NBR1 + $FT_NBR2 \
| tr "\\" "1" \
| tr "\'\"\?\!mrdoc" "023401234" \
| xargs -I{} echo "obase=13; ibase=5;"{} \
| bc \
| tr '0123456789ABC' 'gtaio luSnemf'
