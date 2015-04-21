# M2MProject
Repo to hold files for the IOT m2m project
http://air.imag.fr/index.php/PM2M/2015/TP

What this project does:
Collects home enviromentment data such as temperature, barametric presure, humidity,
as well as collecting fitness activity from a Jawbone bracelet. This information is then published via MQTT. 
Openhab subscribes to these differnt topics and displays information about your fitness level and temperature inside the house.

Openhab can then publish alerts via MQTT when certians rules are met such as, a temperature bieng to hot in the house could impact doing vigourous fitness indoors, or if openhab notices that your activity level is low it can publish an alert.

We use node-red to subscribe to the differnt topics and save the data streams to InfluxDB. We then use Grafana to display the data. Node-red has also been set up to email us alerts when it sees specific topics that it is subscribed too. 

Tech used 
Galileo
http://www.arduino.cc/en/ArduinoCertified/IntelGalileo


Nucleo dev enviroment
https://mbed.org/

Carte Nucleo
http://www.st.com/web/catalog/tools/FM116/SC959/SS1532/LN1847/PF260320

Grafana
http://grafana.org/

Node-red
http://nodered.org/

Jawbone
https://jawbone.com/

InfuxDB
http://influxdb.com/

OpenHab
http://www.openhab.org/

MQTT Broker
Open data projects
https://opensensors.io/


