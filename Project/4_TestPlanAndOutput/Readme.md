# TEST PLAN AND OUTPUT

Here is the test plan 

---------------------------------------------------------------------------------
| SR.NO  | TEST         |INPUT         | EXP. OUTPUT     |OUTPUT         |PASS   |
|--------|--------------|--------------|-----------------|---------------|-------|
|    1)  | IR SENSOR 1  | PUSH BUTTON  | INCREMENT 1 =1  | INCREMENT 1 =1| YES   |          
|    2)  | IR SENSOR 1  | PUSH BUTTON  | INCREMENT 1     | LED ON        | YES   |
|    3)  | IR SENSOR 1  | PUSH BUTTON  | INCREMENT 1 =2  | INCREMENT 1 =2| YES   |
|    4)  | IR SENSOR 1  | PUSH BUTTON  | INCREMENT 1 =3  | INCREMENT 1 =3| YES   |
|    5)  | IR SENSOR 2  | PUSH BUTTON  | DECREMENT 1 =2  | DECREMENT 1 =2| YES   |
|    6)  | IR SENSOR 2  | PUSH BUTTON  | DECREMENT 1 =1  | DECREMENT 1 =1| YES   |
|    7)  | IR SENSOR 2  | PUSH BUTTON  | DECREMENT 1 =0  | DECREMENT 1 =0| YES   |
|    8)  | IR SENSOR 2  | PUSH BUTTON  | LED OFF         | LED OFF       | YES   |
|    9)  | POTENTIOMETER| INPUT >THRESH| BUZZER ON       | BUZZER ON     | YES   |
|    10) | POTENTIOMETER| INPUT< THRESH| BUZZER OFF      | BUZZER OFF    | YES   |