 #include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

double currentTime = 0;
double lastTime = 0;
double getLastTime(){
      return currentTime = millis()/1000.0 - lastTime;
}

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  analogWrite(3,200);
  analogWrite(5,0);
  analogWrite(6,220);
  analogWrite(9,0);
 _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,200);
        analogWrite(5,0);
        analogWrite(6,220);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,80);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,200);
  analogWrite(5,0);
  analogWrite(6,220);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,90);//S
  analogWrite(6,0);
  analogWrite(9,70);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  lastTime = millis()/1000.0;
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(1);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(1);
  while(!(digitalRead(12) == 1.000000))
  {
    _loop();
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,100);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(1);
  lastTime = millis()/1000.0;
  while(!(getLastTime() == 1.500000))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(12) == 1.000000))
  {
    _loop();
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,80);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(2);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,80);
  analogWrite(6,0);
  analogWrite(9,80);
  _delay(0.5);
  // 60 points
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  lastTime = millis()/1000.0;
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.6);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(11) == 1.000000))
  {
    _loop();
    analogWrite(3,80);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(1);
  lastTime = millis()/1000.0;
  while(!(getLastTime() == 1.500000))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(0.2);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(11) == 1.000000))
  {
    _loop();
    analogWrite(3,80);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(2);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,80);
  analogWrite(6,0);
  analogWrite(9,80);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(12) == 1.000000))
  {
    _loop();
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,100);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  lastTime = millis()/1000.0;
  while(!(getLastTime() == 1.500000))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(12) == 1.000000))
  {
    _loop();
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,100);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(2);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,80);
  analogWrite(6,0);
  analogWrite(9,80);
  _delay(0.5);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(11) == 1.000000))
  {
    _loop();
    analogWrite(3,80);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  lastTime = millis()/1000.0;
  while(!(getLastTime() == 1.500000))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.8);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!(digitalRead(12) == 1.000000))
  {
    _loop();
    analogWrite(3,80);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  while(!((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)))
  {
    _loop();
    if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 0.000000)){
        analogWrite(3,80);
        analogWrite(5,0);
        analogWrite(6,100);
        analogWrite(9,0);

    }else{
        if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 0.000000)){
            analogWrite(3,80);
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(9,0);

        }else{
            if((digitalRead(12) == 0.000000)  &&  (digitalRead(11) == 1.000000)){
                analogWrite(3,0);
                analogWrite(5,0);
                analogWrite(6,100);
                analogWrite(9,0);

            }else{
                if((digitalRead(12) == 1.000000)  &&  (digitalRead(11) == 1.000000)){
                    analogWrite(3,0);
                    analogWrite(5,0);
                    analogWrite(6,0);
                    analogWrite(9,0);

                }

            }

        }

    }

  }
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  _delay(0.5);
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,100);
  analogWrite(9,0);
  _delay(2);
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);

}

void _loop() {
}

void loop() {
  _loop();
}
