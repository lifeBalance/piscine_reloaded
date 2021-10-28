#/bin/sh
ifconfig -a | grep -E -o '([[:alnum:]]{2}:){5}[[:alnum:]]{2}'

# The following line:
# ifconfig -a | grep ether | sed 's/ether//' | tr -d "[:blank:]"
# was failing moulinette:
# 38:f9:d3:09:c8:b5
# here! -> media:autoselect(1000baseT<full-duplex,energy-efficient-net>)
# da:00:59:29:0f:00
# da:00:59:29:0f:01
# 3a:f9:d3:91:ed:01
# 38:f9:d3:91:ed:01
# da:00:59:29:0f:00
# 0a:f9:d3:91:ed:01
# c2:ab:16:b7:da:17
