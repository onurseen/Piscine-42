#! /bin/bash
ifconfig -a | grep ether | tr -d 'ether' | sed "s/[[:blank:]]//g"
