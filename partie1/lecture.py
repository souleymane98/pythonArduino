
#Veillez installer la library pyserial
import serial

#Pour mac le serial va chercher votre carte sur se chemin /dev/tty.usbserial donc au lieu de mettre COM1 vous allez mettre (/dev/tty.usbserial)
serialconnect = serial.Serial('COM1', 9600)
while True:
    print (serialconnect.readline())
#Print ser.readline  va afficher le messsage que vous avez envoyer sur le serial
