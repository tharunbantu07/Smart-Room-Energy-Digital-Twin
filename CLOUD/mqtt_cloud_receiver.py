import paho.mqtt.client as mqtt
import json

def on_message(client, userdata, msg):
    data = json.loads(msg.payload.decode())
    print("Live Sensor Data:", data)

client = mqtt.Client()
client.connect("broker.hivemq.com", 1883)
client.subscribe("smartroom/data")
client.on_message = on_message

print("Cloud server listening...")
client.loop_forever()