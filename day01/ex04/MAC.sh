#/bin/sh
ifconfig -a link | grep ether | sed 's/ether *//' | cut -c2-
