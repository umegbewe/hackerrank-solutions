#!/bin/sh
echo -n "Ip address "
read ip
if [[ $ip =~ ^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$ ]]; then
ping $ip
else
echo input a valid ip address
fi
