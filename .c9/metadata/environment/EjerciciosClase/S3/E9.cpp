{"filter":false,"title":"E9.cpp","tooltip":"/EjerciciosClase/S3/E9.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["class Led{","public:","  Led(int _pin){","    pin=_pin;","    pinMode(pin,OUTPUT);","  }","  ","  void luzIntermitente(int tiempo){","  \tdigitalWrite(pin,HIGH);","  \tdelay(tiempo);","  \tdigitalWrite(pin,LOW);","  \tdelay(tiempo);","  }","  ","private:","int pin;","};","","Led bombilloRojo(12);","Led bombillo(13);","void setup()","{","","}","","void loop()","{","\tbombilloRojo.luzIntermitente(1000);","  bombillo.luzIntermitente(500);","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":30,"column":0},"end":{"row":30,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1620437176753,"hash":"f3d1ff67b8f2eeb827b8bf712113d43781249e9c"}