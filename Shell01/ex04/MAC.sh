#! /bin/bash
ifconfig -a | grep ether | tr -d 'ether' | sed "s/[[:space:]]//g"
