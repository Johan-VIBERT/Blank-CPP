/*!==========================================================================================================================================
 * Project name: 
 * Description: version de base
 * Date: 28 Avril 2017
 * Test configuration:
     MCU:             
     Dev.Board:       
     Oscillator:      HS- 16.0000 MHz Crystal
     Ext. Modules:
     SW:              ATmelStudio7 + VisualMicro
 ============================================================================================================================================

                                    /*Notes d'Úvolution de la version:*/
/*
/// Dans cette version, il s'agit   1) 

*/

/*!  ===========================================================================================================================
  // Directives
  // ===========================================================================================================================*/

#include <Arduino.h>

#define LED13 13

/*! ===========================================================================================================================
//  Objets et variables globales
// ===========================================================================================================================*/

// OBJETS: instantiation
  

//VARIABLES:       


/*! ===========================================================================================================================
//  Interruptions
//  ===========================================================================================================================*/



/*! =============================================================================================================================
    Setup
//  ============================================================================================================================*/

void setup()
{
  pinMode(LED13, OUTPUT);
  Serial.begin(9600);
}

/*! =============================================================================================================================
    Programme principal
//  ============================================================================================================================*/

void loop()
{
 digitalWrite(13,HIGH);
 delay(300);
 digitalWrite(13,LOW);
 delay(300);

}
