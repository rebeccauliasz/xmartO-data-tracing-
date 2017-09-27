#include <SimpleMessageSystem.h> 

int sensor = 2; 

void setup() {
  
   Serial.begin(9600);
  
  pinMode(sensor, INPUT);
}

void loop()
{

  if (messageBuild() > 0) { // Checks to see if the message is complete and erases any previous messages
    switch (messageGetChar()) { // Gets the first word as a character
    case 'r': // Read pins (analog or digital)
      readpins(); // Call the readpins function
      break; // Break from the switch
    }

  }

}

void readpins(){ // Read pins (analog or digital)

  switch (messageGetChar()) { // Gets the next word as a character

    case 'd': // READ digital pins

    messageSendChar('d');  // Echo what is being read
    for (char i=2;i<14;i++) {
      messageSendInt(digitalRead(2));
    }
    messageEnd(); // Terminate the message being sent
    break; // Break from the switch



}
}
    
}
