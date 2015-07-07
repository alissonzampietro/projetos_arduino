int numeroPergunta,certo = 7,errado = 2,flag = 1;
String content,resposta,perguntas[][3] = {
                          {"Quem descobriu o Brasil?","a) Pedro Alvares Cabral    b) Joao Paulo Segundo   c) Dom Juan","a"},
                          {"Qual marca criou o iPhone?","a) Microsoft    b) Samsung   c) Apple","c"},
                          {"Quem é o homem mais rico do mundo?","a) Eick Batista    b) Bill Gates   c) Lula","b"},
                          {"Quem é o atual presdente do Brasil?","a) Lula    b) José Dirceu   c) Dilma","c"},
                          {"Em qual região fica localizada a cidade de São Paulo?","a) Nordeste    b) Noroeste   c) Suldeste","c"},
                          {"Qual a maior floresta do mundo?","a) Floresta Amazônica    b) Cerrado   c) Pantanal","a"},
                          {"Qual o país mais populoso do mundo?","a) Rússia    b) Brasil   c) China","c"},
                          {"Qual o país que possui maior extemsão territorial no mundo?","a) EUA    b) Rússia   c) Brasil","a"},
                          {"Qual das seguintes comidas é Italiana?","a) Churrasco    b) Macarrão   c) Feijoada","b"},
                          {"Quem fundou o facebook?","a) Mark Alceu    b) Mark Zucka   c) Mark Zuckenberg","c"},
                          {"Qual o quadrado da metade de 2?","a) 2    b) 1   c) 4","a"},
                          {"Qual a avenida mais extensa de São Paulo?","a) Avenida Paulista    b) Avenida Anhaia Mello   c) Avenida Sapopemba","c"}                          
                        };  
 
void setup() {
  pinMode(certo,OUTPUT);
  pinMode(errado,OUTPUT);
  Serial.begin(9600);    //configura comunicação serial com 9600 bps
  numeroPergunta = random(1,11);
  Serial.print(numeroPergunta);
  Serial.print(perguntas[numeroPergunta][0]);
  Serial.print(perguntas[numeroPergunta][1]);
}
 
void loop() {
}


    
