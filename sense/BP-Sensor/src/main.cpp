#include <Arduino.h>
#include <..\lib\NewPing.h>

// #Ultra Sound Reader Configuration#
#define TrigerPin 1
#define EchoPin 1
NewPing sonar(TrigerPin, EchoPin, 100);     //define sonar class with 100 Cm maximum distance
// #Ultra Sound Reader Configuration#

void setup() {
  
}

void loop() {
  int Distance;
  delay(30);                                // Wait 50ms between pings (about 20 pings/sec).
                                            // 29ms should be the shortest delay between pings.
  Distance = sonar.ping_cm();
  
  //Serial.print("Ping: ");
  //Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  //Serial.println("cm");
}
