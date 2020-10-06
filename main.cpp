#include "miniwin.h"
#include <sstream>
#include <stdlib.h>
#include<stdio.h>
#include <windows.h>

using namespace miniwin;

void Player(int x, int y){

     
	//parte central
     color_rgb(217,219,249);
     rectangulo_lleno(x+13,y-32,27+x,y);
     
    //parte motor
    color_rgb(124,124,120);
    rectangulo_lleno(x+15,y,25+x,4+y);
    rectangulo_lleno(x+17,y,23+x,6+y);
    
    rectangulo_lleno(x+16,y-19,24+x,y-23);
    rectangulo_lleno(x+18,y-24,22+x,y-18);
    
    //parte llama de motor
    color_rgb(250,206,19);
    rectangulo_lleno(x+15,y+6,25+x,12+y);
    rectangulo_lleno(x+13,y+17,27+x,10+y);
    rectangulo_lleno(x+13,y+18,25+x,10+y);
    rectangulo_lleno(x+15,y+20,25+x,10+y);
    rectangulo_lleno(x+17,y+22,25+x,10+y);
    rectangulo_lleno(x+19,y+24,23+x,10+y);
    rectangulo_lleno(x+20,y+26,22+x,12+y);
    
    //parte del centro Azul
    color_rgb(33,111,153);
    rectangulo_lleno(x+18,y-19,22+x,y-23);////aqui
    
    
    //Cabeza de nave
      color_rgb(204,31,33);
      rectangulo_lleno(x+13,y-33,28+x,y-31);//cabeza de nave
      
      color_rgb(252,43,34);
      rectangulo_lleno(x+13,y-35,28+x,y-33);
      rectangulo_lleno(x+15,y-42,26+x,y-33);
      rectangulo_lleno(x+17,y-46,24+x,y-33);
      rectangulo_lleno(x+19,y-49,22+x,y-33);
      
     //cola de nave helice frontal
     rectangulo_lleno(x+19,y-12,21+x,11+y);
     rectangulo_lleno(x+17,y-6,23+x,4+y);
     
     //lateral Izquierda
     rectangulo_lleno(x+10,y-12,13+x,y);
     rectangulo_lleno(x+7,y-9,13+x,y);
     rectangulo_lleno(x+3,y-6,13+x,y);
     rectangulo_lleno(x+1,y-6,3+x,11+y);
     rectangulo_lleno(x-1,y-2,3+x,8+y);
     
     //lateral Derecha
     rectangulo_lleno(x+27,y-12,30+x,y);
     rectangulo_lleno(x+27,y-9,33+x,y);
     rectangulo_lleno(x+27,y-6,37+x,y);
     rectangulo_lleno(x+36,y-6,38+x,11+y);
     rectangulo_lleno(x+36,y-2,40+x,8+y);
}
//DIBUJO DE BALA NIVEL 1
void PlayerBullet(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(124,124,120);
       rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);  
                                           }
     }
//DIBUJO DE BALA NIVEL 2
void PlayerBullet2(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(124,124,120);
       rectangulo_lleno(26+xx,0+yy,30+xx,10+yy);
       rectangulo_lleno(10+xx,0+yy,14+xx,10+yy);  
                                           }
     }
//DIBUJO DE BALA NIVEL 3
void PlayerBullet3(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(124,124,120);
       rectangulo_lleno(26+xx,0+yy,30+xx,10+yy);
       rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);
       rectangulo_lleno(10+xx,0+yy,14+xx,10+yy); 
       }
     }
//DIBUJO DE BALA NIVEL 4
void PlayerBullet4(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(124,124,120);
       
      rectangulo_lleno(26+xx,0+yy,30+xx,10+yy);
      rectangulo_lleno(10+xx,0+yy,14+xx,10+yy);
      rectangulo_lleno(36+xx,0+yy,40+xx,10+yy);
      rectangulo_lleno(xx,0+yy,4+xx,10+yy);
       }
     }
//DIBUJO DE BALA NIVEL 5
void PlayerBullet5(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(124,124,120);
      rectangulo_lleno(26+xx,0+yy,30+xx,10+yy);
      rectangulo_lleno(10+xx,0+yy,14+xx,10+yy);
       rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);  
      rectangulo_lleno(36+xx,0+yy,40+xx,10+yy);
      rectangulo_lleno(xx,0+yy,4+xx,10+yy); 
       }
     }

void Enemy(int x, int y, int r, int g, int b){
     color_rgb(r,g,b);
     
     rectangulo_lleno(x+13,y-10,27+x,y+2);
       
     rectangulo_lleno(x+10,y-12,13+x,y);
     rectangulo_lleno(x+7,y-9,13+x,y);
     rectangulo_lleno(x+3,y-6,13+x,y);
     rectangulo_lleno(x+1,y-6,3+x,11+y);
     rectangulo_lleno(x-1,y-2,3+x,8+y);
     
     rectangulo_lleno(x+27,y-12,30+x,y);
     rectangulo_lleno(x+27,y-9,33+x,y);
     rectangulo_lleno(x+27,y-6,37+x,y);
     rectangulo_lleno(x+36,y-6,38+x,11+y);
     rectangulo_lleno(x+36,y-2,40+x,8+y);
     }

void EnemyRow01Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow02Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow03Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow04Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow05Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
     
void PlayerHeart(int x, int y, int xx){
          color_rgb(200,20,20);
          rectangulo_lleno(x,y+120,xx+x,y+140);  
     }

std::string ShowScore (std::string text,int number){
         std::stringstream sstm;
         sstm << text << number;
         return sstm.str();    
     }


int main(){
	

    //Gamebox
    int WIDTH  = 640;
    int HEIGHT = 600;
    vredimensiona(WIDTH,HEIGHT);
    
    //Variables
    int PlayerX = 320, PlayerY = 520; 
    int PlayerBulletX=320, PlayerBulletY=520;
    
    int EnemyRow01X = 160, EnemyRow01Y = 50;
    int EnemyRow01BulletX=160, EnemyRow01BulletY=50;
    
    int EnemyRow02X = 480, EnemyRow02Y = 100;
    int EnemyRow02BulletX=480, EnemyRow02BulletY=100;
    
    int EnemyRow03X = 100, EnemyRow03Y = 150;
    int EnemyRow03BulletX=100, EnemyRow03BulletY=150;
    
    int EnemyRow04X = 200, EnemyRow04Y = 200;
    int EnemyRow04BulletX=200, EnemyRow04BulletY=200;
    
    int EnemyRow05X = 180, EnemyRow05Y = 250;
    int EnemyRow05BulletX=180, EnemyRow05BulletY=250;
    int start;
    
    int t = tecla();
    int RandomRow01,RollRow01;
    int RandomRow02,RollRow02;
    int RandomRow03,RollRow03;
    int RandomRow04,RollRow04;
    int RandomRow05,RollRow05;
    int RNGSpawn01, RNGSpawn02, RNGSpawn03,RNGSpawn04,RNGSpawn05 ;
    
    bool PlayerAlive = true;
    bool EnemyRow01Alive = true;
    bool EnemyRow02Alive = true;
    bool EnemyRow03Alive = true;
    bool EnemyRow04Alive = true;
    bool EnemyRow05Alive = true;
    
    int EnemyRow01Counter = 0;
    int EnemyRow02Counter = 0;
    int EnemyRow03Counter = 0;
    int EnemyRow04Counter = 0;
    int EnemyRow05Counter = 0;
    int PlayerLifeCounter = 40;
    int nivel=0;
    std::string ScoreText = "Puntaje Actual : ";
    std::string BestScoreText = "Mejor Puntaje : ";
    std::string NivelText= "Nivel : ";
    std::string Autor= "Autor : Jhonny Velasquez Caballero";
    std::string GameOverText = "Game Over. Puntaje Final : ";
    std::string RestartText = "Presione UP para reiniciar el juego";
    std::string starText= "Presione Enter para iniciar el juego";
    std::string titulo="Bienvenido a GalaxyWar";
    int CurrentScoreNumber = 0;
    int BestScoreNumber = 0;
    
    int Row01R,Row01G, Row01B;
    int Row02R,Row02G, Row02B;
    int Row03R,Row03G, Row03B;
    int Row04R,Row04G, Row04B;
    int Row05R,Row05G, Row05B;
    
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row03BonusX = 0;
    int Row04BonusX = 0;
    int Row05BonusX = 0;
    int Row01BonusBulletY = 0;
    int Row02BonusBulletY = 0;
    int Row03BonusBulletY = 0;
    int Row04BonusBulletY = 0;
    int Row05BonusBulletY = 0;
    int BonusDamage = 0;
    
    
    int Start = NINGUNA;
//Gameloop & Update Cycle
    texto(210, 200, titulo);
    texto(190, 250, starText);
    
    refresca();
   do 	{
       
       Start = tecla(); 	     
   
  } while (Start != RETURN);
  
                   
    while(t != ESCAPE){
    
        //Player Controls
        if (PlayerAlive){
        
            if(t == IZQUIERDA){
                if(PlayerX == 0){ }
                else {PlayerX = PlayerX-20, PlayerY = PlayerY+0;}
            } 
            else if(t == DERECHA){
                if(PlayerX == WIDTH-40){ }
                else PlayerX = PlayerX+20, PlayerY = PlayerY+0;
            }
            //Shooting
            if(PlayerBulletY<=0 && t==ESPACIO){
                 PlayerBulletX=PlayerX; PlayerBulletY=PlayerY-30;
                 PlaySound("disparo.wav",NULL,SND_ASYNC);
                 }
            if(t==ESPACIO){
                 if(PlayerBulletY>=590 && PlayerBulletY<=600 ){
                    PlayerBulletX = PlayerX, PlayerBulletY= PlayerBulletY-10;
                    
                    }  
              
              }
            if(t=ESPACIO){
                 if(PlayerBulletY<=591 && PlayerBulletY>=0){
                    PlayerBulletX = PlayerBulletX+0, PlayerBulletY= PlayerBulletY-10;
                    }
            }
           
        }
        else if(t == ARRIBA){
                 CurrentScoreNumber = 0;
                 PlayerAlive = true;
                 PlayerLifeCounter = 40;
                 PlayerX = 320, PlayerY = 520; 
                 PlayerBulletX=320, PlayerBulletY=520;
            }
       
            
        
        //Enemy Row 1
        if (EnemyRow01Alive){
            //Enemy Row 1 Movement
            if(RandomRow01==0){RollRow01=IZQUIERDA;}
            if(RandomRow01==1){RollRow01=DERECHA;}
            RandomRow01 = rand()%50;
            
            if(RollRow01 == IZQUIERDA){
                  if(EnemyRow01X>=0){
                     EnemyRow01X = EnemyRow01X-(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                  }
            } else if(RollRow01 == DERECHA){
                   if(EnemyRow01X<590){
                     EnemyRow01X = EnemyRow01X+(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                }
            }
            
            if(EnemyRow01BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow01BulletX = EnemyRow01X;
                EnemyRow01BulletY = EnemyRow01Y+(4+Row01BonusBulletY);
            } 
            //Enemy Row 1 Shooting
            if(t==ESPACIO){
                if(EnemyRow01BulletY>=20 && EnemyRow01BulletY<=31 ){
                   EnemyRow01BulletX = EnemyRow01X, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow01BulletY>=21 && EnemyRow01BulletY<=HEIGHT){
                   EnemyRow01BulletX = EnemyRow01BulletX+0, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                }
            }
        }
        
        //Enemy Row 2
        if (EnemyRow02Alive){
            //Enemy Row 2 Movement                 
            if(RandomRow02==0){RollRow02=IZQUIERDA;}
            if(RandomRow02==1){RollRow02=DERECHA;}
            RandomRow02= rand()%50;
            
            if(RollRow02 == IZQUIERDA){
                  if(EnemyRow02X>=0){
                     EnemyRow02X = EnemyRow02X-(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                  }
            } else if(RollRow02 == DERECHA){
                   if(EnemyRow02X<590){
                     EnemyRow02X = EnemyRow02X+(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                }
            }
            //Enemy Row 2 Shooting
            if(EnemyRow02BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow02BulletX = EnemyRow02X;
                EnemyRow02BulletY = EnemyRow02Y+(4+Row01BonusBulletY);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow02BulletY>=20 && EnemyRow02BulletY<=31 ){
                   EnemyRow02BulletX = EnemyRow02X, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow02BulletY>=21 && EnemyRow02BulletY<=HEIGHT){
                   EnemyRow02BulletX = EnemyRow02BulletX+0, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
         //Enemy Row 3
        if (EnemyRow03Alive){
            //Enemy Row 3 Movement                 
            if(RandomRow03==0){RollRow03=IZQUIERDA;}
            if(RandomRow03==1){RollRow03=DERECHA;}
            RandomRow03= rand()%50;
            
            if(RollRow03 == IZQUIERDA){
                  if(EnemyRow03X>=0){
                     EnemyRow03X = EnemyRow03X-(2+Row03BonusX), EnemyRow03Y = EnemyRow03Y+0;
                  }
            } else if(RollRow03 == DERECHA){
                   if(EnemyRow03X<590){
                     EnemyRow03X = EnemyRow03X+(2+Row03BonusX), EnemyRow03Y = EnemyRow03Y+0;
                }
            }
            //Enemy Row 3 Shooting
            if(EnemyRow03BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow03BulletX = EnemyRow03X;
                EnemyRow03BulletY = EnemyRow03Y+(4+Row01BonusBulletY);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow03BulletY>=20 && EnemyRow03BulletY<=31 ){
                   EnemyRow03BulletX = EnemyRow03X, EnemyRow03BulletY= EnemyRow03BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow03BulletY>=21 && EnemyRow03BulletY<=HEIGHT){
                   EnemyRow03BulletX = EnemyRow03BulletX+0, EnemyRow03BulletY= EnemyRow03BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
        //Enemy Row 4
        if (EnemyRow04Alive){
            //Enemy Row 4 Movement                 
            if(RandomRow04==0){RollRow04=IZQUIERDA;}
            if(RandomRow04==1){RollRow04=DERECHA;}
            RandomRow04= rand()%50;
            
            if(RollRow04 == IZQUIERDA){
                  if(EnemyRow04X>=0){
                     EnemyRow04X = EnemyRow04X-(2+Row04BonusX), EnemyRow04Y = EnemyRow04Y+0;
                  }
            } else if(RollRow04 == DERECHA){
                   if(EnemyRow04X<590){
                     EnemyRow04X = EnemyRow04X+(2+Row04BonusX), EnemyRow04Y = EnemyRow04Y+0;
                }
            }
            //Enemy Row 4 Shooting
            if(EnemyRow04BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow04BulletX = EnemyRow04X;
                EnemyRow04BulletY = EnemyRow04Y+(4+Row01BonusBulletY);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow04BulletY>=20 && EnemyRow04BulletY<=31 ){
                   EnemyRow04BulletX = EnemyRow04X, EnemyRow04BulletY= EnemyRow04BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow04BulletY>=21 && EnemyRow04BulletY<=HEIGHT){
                   EnemyRow04BulletX = EnemyRow04BulletX+0, EnemyRow04BulletY= EnemyRow04BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
        //Enemy Row 5
        if (EnemyRow05Alive){
            //Enemy Row 5 Movement                 
            if(RandomRow05==0){RollRow05=IZQUIERDA;}
            if(RandomRow05==1){RollRow05=DERECHA;}
            RandomRow05= rand()%50;
            
            if(RollRow05 == IZQUIERDA){
                  if(EnemyRow05X>=0){
                     EnemyRow05X = EnemyRow05X-(2+Row05BonusX), EnemyRow05Y = EnemyRow05Y+0;
                  }
            } else if(RollRow05 == DERECHA){
                   if(EnemyRow05X<590){
                     EnemyRow05X = EnemyRow05X+(2+Row05BonusX), EnemyRow05Y = EnemyRow05Y+0;
                }
            }
            //Enemy Row 5 Shooting
            if(EnemyRow05BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow05BulletX = EnemyRow05X;
                EnemyRow05BulletY = EnemyRow05Y+(4+Row01BonusBulletY);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow05BulletY>=20 && EnemyRow05BulletY<=31 ){
                   EnemyRow05BulletX = EnemyRow05X, EnemyRow05BulletY= EnemyRow05BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow05BulletY>=21 && EnemyRow05BulletY<=HEIGHT){
                   EnemyRow05BulletX = EnemyRow05BulletX+0, EnemyRow05BulletY= EnemyRow05BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
        // Colision Detection 
           // Player Bullets to the Enemy on Row 1    
              if(EnemyRow01Alive){ 
                  if(PlayerBulletX>=EnemyRow01X-20 && PlayerBulletX<=EnemyRow01X+30){
                     if(PlayerBulletY>=50 && PlayerBulletY<=80){
                        EnemyRow01Alive = false;
                        EnemyRow01X = -20, EnemyRow01Y = -20;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        PlaySound("colision.wav", NULL,SND_ASYNC);
                         
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 2        
             if(EnemyRow02Alive){ 
                 if(PlayerBulletX>=EnemyRow02X-20 && PlayerBulletX<=EnemyRow02X+30){
                     if(PlayerBulletY>=100 && PlayerBulletY<=130){
                        EnemyRow02Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        PlaySound("colision.wav", NULL,SND_ASYNC);
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 3  
              if(EnemyRow03Alive){ 
                 if(PlayerBulletX>=EnemyRow03X-20 && PlayerBulletX<=EnemyRow03X+30){
                     if(PlayerBulletY>=150 && PlayerBulletY<=180){
                        EnemyRow03Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        PlaySound("colision.wav", NULL,SND_ASYNC);
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 4  
              if(EnemyRow04Alive){ 
                 if(PlayerBulletX>=EnemyRow04X-20 && PlayerBulletX<=EnemyRow04X+30){
                     if(PlayerBulletY>=200 && PlayerBulletY<=230){
                        EnemyRow04Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        PlaySound("colision.wav", NULL,SND_ASYNC);
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 5 
              if(EnemyRow05Alive){ 
                 if(PlayerBulletX>=EnemyRow05X-20 && PlayerBulletX<=EnemyRow05X+30){
                     if(PlayerBulletY>=250 && PlayerBulletY<=280){
                        EnemyRow05Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        PlaySound("colision.wav", NULL,SND_ASYNC);
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Enemy on Row 1 Bullets to the Player
             if(PlayerAlive){  
                 if(EnemyRow01BulletX>=PlayerX-20 && EnemyRow01BulletX<=PlayerX+20){
                    if(EnemyRow01BulletY>=400 && EnemyRow01BulletY<=430){
                        PlayerLifeCounter -= 1+BonusDamage;
                        
                     }
                  }
              }
            
          // Enemy on Row 2 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow02BulletX>=PlayerX-20 && EnemyRow02BulletX<=PlayerX+20){
                     if(EnemyRow02BulletY>=400 && EnemyRow02BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
              // Enemy on Row 3 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow03BulletX>=PlayerX-20 && EnemyRow03BulletX<=PlayerX+20){
                     if(EnemyRow03BulletY>=400 && EnemyRow03BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
               // Enemy on Row 4 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow04BulletX>=PlayerX-20 && EnemyRow04BulletX<=PlayerX+20){
                     if(EnemyRow04BulletY>=400 && EnemyRow04BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
               // Enemy on Row 5 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow05BulletX>=PlayerX-20 && EnemyRow05BulletX<=PlayerX+20){
                     if(EnemyRow05BulletY>=400 && EnemyRow05BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
        
        //Delete & Create
        borra();
            //Check Player Alive & Paint if so
            if (PlayerLifeCounter <= 0){
                                  //PlayerBullet(0, 0);
                                  PlayerAlive = false;}
            if (PlayerAlive){Player(PlayerX,PlayerY);}
           // if (PlayerAlive){PlayerBullet(PlayerBulletX, PlayerBulletY);}
            
            
            //Paint Enemy Row 01
           if (EnemyRow01Alive){Enemy(EnemyRow01X, EnemyRow01Y,Row01R,Row01G, Row01B);}
           if (EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
            
            
            //Paint Enemy Row 02
            if (EnemyRow02Alive){Enemy(EnemyRow02X, EnemyRow02Y,Row02R,Row02G, Row02B);}
            if (EnemyRow02Alive){EnemyRow02Bullet(EnemyRow02BulletX,EnemyRow02BulletY);}  
            
            //Paint Enemy Row 03
             if (EnemyRow03Alive){Enemy(EnemyRow03X, EnemyRow03Y,Row03R,Row03G, Row03B);}
             if (EnemyRow03Alive){EnemyRow03Bullet(EnemyRow03BulletX,EnemyRow03BulletY);}
             
             //Paint Enemy Row 04
             if (EnemyRow04Alive){Enemy(EnemyRow04X, EnemyRow04Y,Row04R,Row04G, Row04B);}
             if (EnemyRow04Alive){EnemyRow04Bullet(EnemyRow04BulletX,EnemyRow04BulletY);}
             
             //Paint Enemy Row 05
             if (EnemyRow05Alive){Enemy(EnemyRow05X, EnemyRow05Y,Row05R,Row05G, Row05B);}
             if (EnemyRow05Alive){EnemyRow05Bullet(EnemyRow05BulletX,EnemyRow05BulletY);}
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 01
            if (!EnemyRow01Alive){
                                  RNGSpawn01 = rand()%3;
                                  switch(RNGSpawn01) {
                                  case 0 : EnemyRow01X = 20; break;
                                  case 1 : EnemyRow01X = 160;break;
                                  case 2 : EnemyRow01X = 240;break;
                                  case 3 : EnemyRow01X = 320;break;
                                  }
                                  EnemyRow01Y = 50;
                                  EnemyRow01BulletX=EnemyRow01X, EnemyRow01BulletY=50;
                                  EnemyRow01Counter += 5;}
            if (EnemyRow01Counter == 1000){
                                  EnemyRow01Counter = 0;
                                  EnemyRow01Alive = true;}
            
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 02
            if (!EnemyRow02Alive){
                                  RNGSpawn02 = rand()%3;
                                  switch(RNGSpawn02) {
                                  case 0 : EnemyRow02X = 20; break;
                                  case 1 : EnemyRow02X = 160;break;
                                  case 2 : EnemyRow02X = 240;break;
                                  case 3 : EnemyRow02X = 320;break;
                                  }
                                  EnemyRow02Y = 100;
                                  EnemyRow02BulletX=EnemyRow02X, EnemyRow02BulletY=100;
                                  EnemyRow02Counter += 5;}
            if (EnemyRow02Counter == 1000){
                                  EnemyRow02Counter = 0;
                                  EnemyRow02Alive = true;}
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 03
            if (!EnemyRow03Alive){
                                  RNGSpawn03 = rand()%3;
                                  switch(RNGSpawn03) {
                                  case 0 : EnemyRow03X = 20; break;
                                  case 1 : EnemyRow03X = 160;break;
                                  case 2 : EnemyRow03X = 240;break;
                                  case 3 : EnemyRow03X = 320;break;
                                  }
                                  EnemyRow03Y = 150;
                                  EnemyRow03BulletX=EnemyRow03X, EnemyRow03BulletY=150;
                                  EnemyRow03Counter += 5;}
            if (EnemyRow03Counter == 1000){
                                  EnemyRow03Counter = 0;
                                  EnemyRow03Alive = true;}
             //Respawning check & Restart Position Pseudorandomly of Enemy Row 04
            if (!EnemyRow04Alive){
                                  RNGSpawn04 = rand()%3;
                                  switch(RNGSpawn04) {
                                  case 0 : EnemyRow04X = 20; break;
                                  case 1 : EnemyRow04X = 160;break;
                                  case 2 : EnemyRow04X = 240;break;
                                  case 3 : EnemyRow04X = 320;break;
                                  }
                                  EnemyRow04Y = 200;
                                  EnemyRow04BulletX=EnemyRow04X, EnemyRow04BulletY=200;
                                  EnemyRow04Counter += 5;}
            if (EnemyRow04Counter == 1000){
                                  EnemyRow04Counter = 0;
                                  EnemyRow04Alive = true;}
                                  
             //Respawning check & Restart Position Pseudorandomly of Enemy Row 05
            if (!EnemyRow05Alive){
                                  RNGSpawn05 = rand()%3;
                                  switch(RNGSpawn05) {
                                  case 0 : EnemyRow05X = 20; break;
                                  case 1 : EnemyRow05X = 160;break;
                                  case 2 : EnemyRow05X = 240;break;
                                  case 3 : EnemyRow05X = 320;break;
                                  }
                                  EnemyRow05Y = 250;
                                  EnemyRow05BulletX=EnemyRow05X, EnemyRow05BulletY=250;
                                  EnemyRow05Counter += 5;}
            if (EnemyRow05Counter == 1000){
                                  EnemyRow05Counter = 0;
                                  EnemyRow05Alive = true;}
                                  
            if (PlayerAlive){
            //Score Screen
            color_rgb(111,111,111);
            rectangulo_lleno(0,550,640,600);
            color_rgb(20,20,20);
            rectangulo_lleno(30,560,230,580);
            texto(440, 560, ShowScore(ScoreText,CurrentScoreNumber));
            texto(440, 575, ShowScore(BestScoreText,BestScoreNumber));
            texto(350, 575, ShowScore(NivelText,nivel));
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            } 
            else {
            //Game Over Text 
            color_rgb(250,250,250);
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            texto(230, 240, ShowScore(GameOverText,CurrentScoreNumber));
            texto(230, 260, ShowScore(BestScoreText,BestScoreNumber) );
            texto(230, 280, Autor);
            texto(230, 300, RestartText);
            EnemyRow01Alive=false;
            EnemyRow02Alive=false;
            EnemyRow03Alive=false;
            EnemyRow04Alive=false;
            EnemyRow05Alive=false;
            PlayerBullet(0,0);
            PlayerBullet2(0,0);
            PlayerBullet3(0,0);
            PlayerBullet4(0,0);
            PlayerBullet5(NULL,NULL);
            mciSendString("close fondo.mp3",NULL,0,0);
            mciSendString("close imperial.wav",NULL,0,0);
            mciSendString("close starwars.wav",NULL,0,0); 
            }                                           
            //Paint Players Life
            if (PlayerLifeCounter > 0) {
                PlayerHeart(30,440,PlayerLifeCounter*5);
            }
            else if (PlayerLifeCounter <= 0) { } 
            
            //Difficulty Increase based on Current Score
                //NIVEL 1
                if (CurrentScoreNumber < 100){                   
                Row01R=22,Row01G=143, Row01B=140; 
                Row01BonusX = 0;
                Row01BonusBulletY = 0;
                BonusDamage = 0;
                nivel=1;
                PlayerBullet(PlayerBulletX,PlayerBulletY);
                 
                mciSendString("close imperial.wav",NULL,0,0);
                mciSendString("play starwars.wav",NULL,0,0); 
                
                EnemyRow02Alive=false;
                EnemyRow03Alive=false;
                EnemyRow04Alive=false;
                EnemyRow05Alive=false;
                
                //NIVEL 2                   
                } else if(CurrentScoreNumber < 250){
                       
                Row01R=50,Row01G=163, Row01B=84;
                Row02R=14,Row02G=126, Row02B=34;
                Row01BonusX = 0;
                Row02BonusX = 0;
                Row01BonusBulletY = 0;
                Row02BonusBulletY = 0; 
                BonusDamage = 1;
                nivel=2;
                PlayerBullet(0, 0);
                PlayerBullet2(PlayerBulletX,PlayerBulletY); 
                mciSendString("close starwars.wav",NULL,0,0);
                mciSendString("play imperial.wav",NULL,0,0);
                EnemyRow03Alive=false;
                EnemyRow04Alive=false;
                EnemyRow05Alive=false;  
                  
                //NIVEL 3
                } else if(CurrentScoreNumber < 400){
                
                Row01R=224,Row01G=220, Row01B=71;
                Row02R=234,Row02G=183, Row02B=23;
                Row03R=234,Row03G=183, Row03B=23;
                Row01BonusX = 1;
                Row02BonusX = 1;
                Row03BonusX = 1;
                Row01BonusBulletY = 1;
                Row02BonusBulletY = 1;
                Row03BonusBulletY = 1;
                BonusDamage = 1;
                nivel=3;
                PlayerBullet(0, 0);
                PlayerBullet2(0, 0);
                PlayerBullet3(PlayerBulletX,PlayerBulletY);
                EnemyRow04Alive=false;
                EnemyRow05Alive=false; 
                mciSendString("close imperial.wav",NULL,0,0);
                mciSendString("play fondo.mp3",NULL,0,0);
             
                //NIVEL 4 
                } else if(CurrentScoreNumber < 550){
                
                Row01R=255,Row01G=184, Row01B=81; 
                Row02R=255,Row02G=184, Row02B=81; 
                Row03R=255,Row03G=184, Row03B=81; 
                Row04R=255,Row04G=184, Row04B=81; 
                Row01BonusX = 1;
                Row02BonusX = 1;
                Row03BonusX = 1;
                Row04BonusX = 1;
                Row01BonusBulletY = 1;
                Row02BonusBulletY = 1;
                Row03BonusBulletY = 1;
                Row04BonusBulletY = 1;
                BonusDamage = 2;
                nivel=4;
                PlayerBullet(0, 0);
                PlayerBullet2(0, 0);
                PlayerBullet3(0, 0);
                PlayerBullet4(PlayerBulletX,PlayerBulletY);
                EnemyRow05Alive=false;
                mciSendString("close fondo.mp3",NULL,0,0);
                mciSendString("play starwars.wav",NULL,0,0);
                
             
                //NIVEL 6
                } else {
                Row01R=187,Row01G=36, Row01B=36;
                Row02R=150,Row02G=14, Row02B=14;
                Row03R=187,Row03G=36, Row03B=36;
                Row04R=150,Row04G=14, Row04B=14;
                Row05R=187,Row05G=36, Row05B=36;
                Row01BonusX = 2;
                Row02BonusX = 2;
                Row03BonusX = 2;
                Row04BonusX = 2;
                Row05BonusX = 2;
                Row01BonusBulletY = 2;
                Row02BonusBulletY = 2; 
                Row03BonusBulletY = 2;
                Row04BonusBulletY = 2;
                Row05BonusBulletY = 2;
                BonusDamage = 3;
                nivel=5;
                PlayerBullet(0, 0);
                PlayerBullet2(0, 0);
                PlayerBullet3(0, 0);
                PlayerBullet4(0, 0);
                PlayerBullet5(PlayerBulletX,PlayerBulletY);
                mciSendString("close starwars.wav",NULL,0,0);
                mciSendString("play imperial.wav",NULL,0,0);
            }
            
        refresca();
        espera(10);
        t= tecla();
        
    }
    return 0;
    system("color 8F");
}

