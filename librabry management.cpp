#include <stdio.h> 
#include <conio.h>
#include <process.h>
#include <stdlib.h>

void apparatus();          //Function is used for apparatus of First year
void apparatus2();         //Function is used for apparatus of Second year
void apparatus3();         //Function is used for apparatus of Third year lab1
void apparatus4();         //Function is used for apparatus of Third year lab2
void apparatust();         //Function is used for stalk
void apparatustv();        //function is used for stalk
void firstyear();          //Function is used for First Year practical
void secondyear();         //Function is used for Second Year practical
void thirdyear();          //Function is used for Third Year practical
void Stalk();              //Function is used for stalk
void main()
{
int i;
char s;
clrscr();
printf("\t\t\t*********************************\n");
printf("\t\t\t\tPHYSICS LAB MANAGEMENT\n");
printf("\t\t\t*********************************\n");
printf("\t\t\t\t -by Utkarsh Pathak and Shriya Varli\n");
printf("\n\n\n\n\t\t\tPress Enter");
scanf("%c",&s);
while(i!=5)
{
clrscr();
printf("-Class\n1.First Year\n-----------------------------------------------------------------------\n2.Second Year\n-----------------------------------------------------------------------\n3.Third Year\n-----------------------------------------------------------------------\n4.Stalk\n-----------------------------------------------------------------------\n5.Exit\n-----------------------------------------------------------------------\n");
printf("Enter your choice from (1,2,3,4 or 5) = ");
scanf("%d",&i);


switch(i)
{
case 1 :	firstyear();
break;
case 2 :	secondyear();
break;
case 3 : 	thirdyear();
break;
case 4 :	Stalk();
break;
case 5 :        exit(0);
break;

default :	printf("Incorrect Choice");
}
}

getch();
}
void firstyear()
{
clrscr();
printf("**FIRSTYEAR**");
printf("\n1.Measurement Using Vernier Calliper, Micrometer Screw Gauge, Travelling Microscope.");
printf("\n2.Determination of MI of disc using Ring.");
printf("\n3.Determination of 'Y' by Method Bending.");
printf("\n4.Determination of 'n' by flat Spiral Spring.");
printf("\n5.Determination of Frequency of AC mains by Sonometer.");
printf("\n6.Ditermination of Wavelength of LASER using plane diffraction grating.");
printf("\n7.Study of Divergence of LASER beam.");
printf("\n8.Study of spectrometer and determination of angle of prism.");
printf("\n9.Determination of R.I. of various colours.");
printf("\n10.Study of Kirchhoff's current law.");
printf("\n11.Study of Kirchhoff’s voltage law.");
printf("\n12.Study of Analog and Digital Multi meters.");
printf("\n13.Characteristics of p-n junction diode.");
printf("\n14.Charging and discharging of capacitor.");
printf("\n\n*Enter the practical no whose apparatus you want to know.");
printf("\n*Enter 20 to previous page.\n");
apparatus ();
}
void apparatus ()
{
int KN;
while(KN!=20)
{
scanf("%d",&KN);
clrscr();
switch(KN)
{
case 1:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n\n-Vernier calliper\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tC4\n----------------------------------------------------------------------\n-metallic bob\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tC3\n-----------------------------------------------------------------------");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 2:printf("\nApparatus\t\t\t\t\t\t\t\t\tAddress\n-Disc\t\t\tC3\n-ring\t\t\t\t\t\t\t\t\t\t\t\t\t\tC3\n-wire\t\t\t\t\t\t\t\t\t\t\t\t\t\tB2\n-stopwatch\t\t\t\t\t\t\t\t\t\t\tC3\n-vernier calliper\t\tC4\n-micrometer screw gauge\t\t\t\t\t\tC4\n-meter scale\t\t\t\t\tD");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 3:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-A meter scale\tD\n-weight box\tC3\n-Travelling microscope\tC29\n-vernier calliper\tC4\n-micrometer\tC4\n-scale pin\tC3.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 4:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n-----------------------------------------------------------------------\nFlat spiral spring\tC3\n-weights\tC3\n-Micrometer\tC4\n-vernier calliper\tC4\n-stopwatch\tC3");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 5:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-AC source\tC12\n-step down transformer\tA5\n-hanger with weights\tC3\n-horse shoe magnet\tB1\n-stand\tB1\n-sonometer bridge\tC4\n-sonometer wire\tB2.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 6:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-He-Ne laser\tD2\n-Glass grating\tC4\n-Optical bench\tD\n-screen\tD.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 7:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-He-Ne laser\tD2\n-scale\tD\n-power supply\tC12.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 8:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-Spectrometer\tB3\n-prism\tB1\n-polychromatic source B1\n-spirit lamp A6.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 9:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-spectrometer B3\n-glass prism B1\n-spirit level C4\n-mercury source(poly chromatic)\n-Reading lamp D2.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 10:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-Power supply C12\n-Resisters (47*10^2ohm,1kohm,1kohm,100ohm) C7\n-milli ammeters C19\n-Connecting wire B1/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 11:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-10 DC power supply C12\n-resisters(100ohm,100ohm,5.7kohm,1.3kohm) C7\n-Digital multi meter C8\n-voltmeter C20\n-Connecting wire  B1/B3/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 12:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-Battery  C12\n-analog and Digital multi meter C8\n-resistance C14\n-diodes C7.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 13:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-p-n junction diode(IN4007) C7\n-resistor(1kohm) C7\n-voltmeter(0-10 v) C20.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 14:printf("\nApparatus\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAddress\n----------------------------------------------------------------------\n-DC power supply(10v) C12\n-resistors(220kohm) C7\n-Capacitor(470microF) C7\n-DMM  C8\n-switch\n-stopwatch C3.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 15:printf("\nenter 20 to exit:");
break;
case 16:printf("\nenter 20 to exit:");
break;
case 17:printf("\nenter 20 to exit:");
break;
case 18:firstyear();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
}


void secondyear()
{
clrscr();

printf("**SECONDYEAR**");
printf("\n1.Determination of frequency of AC mains by Sonometer.");
printf("\n2.Study of coupled Oscillation");
printf("\n3.Valocity of Sound by Phase Shift Method");
printf("\n4.Diretional Characteristics Of Microphone");
printf("\n5.Dispersive Power of glass prism");
printf("\n6.Diffraction At the edge of razor blade");
printf("\n7.Double Refracting Prism");
printf("\n8.Determination of wavelength of source using Newton's Ring");
printf("\n9.Circuit Theorems");
printf("\n10.Transistor Characteristics (CE configuration)");
printf("\n11.I-V Characteristics of UJT");
printf("\n12.OPANMP as inverting and non-inverting Amplifier");
printf("\n13.Study of Logic gates");
printf("\n14.Use of CRO");
printf("\n15.Plotting various Trigonometric functions using EXCEL");
printf("\n16.Inverse,Determination of matrix, solutions of linear Equations using EXCEL");
printf("\n\n*Enter the practical no whose apparatus you want to know.");
printf("\n*Enter 20 to previous page.\n");
apparatus2();
}
void apparatus2()
{
int VD;
while(VD!=20)
{
scanf("%d”, &VD);
clrscr();
switch(VD)
{
case 1:printf("\nApparatus:-\n\n\n\n-AC source C12\n-step-down transformer A5\n-hanger with weight C3\n-horse-shoe magnet B1\n-stand\n-Sonometer wire B2\n-Sonometer bridges C4.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 2:printf("\nApparatus:-\n-2 Simple Pendulum C3\n-Thread\n-Meter Scale D\n-Stopwatch C3.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 3:printf("\nApparatus:-\n-Audio Frequency Generator D1\n-Speaker D3\n-Microphone D3\n-Cathode Ray Oscilloscope(CRO) A4\n-Meter Scale D.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 4:printf("\nApparatus:-\n-Loud Speaker D\n-Function Generator D1\n-Microphone Amplifier  D\n-CRO A4\n-Connecting Wire B2/B3/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 5:printf("\nApparatus:-\n-Spectrometer D \n-Prism C4\n-Spirit Level C4\n-Mercury Vapour Lamp D.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 6:printf("\nApparatus:-\n-Saddle to hold laser pointer D\n-Laser pointer D\n-Razor blade D\n-Screen D\n-Scale D\n-Craft Paper D.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 7:printf("\nApparatus:-\n-Spectrometer D\n-Prism C4\n-Spirit Level C4\n-Mercury Vapour Lamp D.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 8:printf("\nApparatus:-\n-Travelling Microscope C24\n-Glass Plate \n-Plano convex lens\n-Na Lamp D\n-Reading Lamp D\n-Lens.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 9:printf("\nApparatus:-\n-Resistor(1Kohm) C7\n-Digital Multi meter C8\n-Power Supply(10V) C12\n-Resistance Box C14\n-Milli ammeter\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 10:printf("\nApparatus:-\n-BJT(SL100) C7\n-Power Supply(10V) C12\n-Resistors C14\n-Milli ammeter C19\n-Micrometer C18\n-Voltmeter C20\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 11:printf("\nApparatus:-\n-UJT(2N2646) C7\n-Power Supply(10V) C12\n-Voltmeter(5Kohm) C20\n-Milli ammeter C19\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 12:printf("\nApparatus:-\n-IC-741\n-Resistance(1Kohm,5Kohm,10Kohm) C7\n-Power Supply C12\n-DMM C8.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 13:printf("\nApparatus:-\n-Project Board C12\n-DC Power Supply C12\n-Logic Gate C12\n-ICs C7\n-LED Indicator C7\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 14:printf("\nApparatus:-\n-CRO A4\n-Power Supply C12\n-Frequency/Signal Generator C11\n-Connecting Probes C34.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 15:printf("\nApparatus:-\n-Computer\n-Ms Excel Software.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 16:printf("\nApparatus:-\n-Computer\n-Ms Excel Software.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 17:printf("\nenter 20 to exit:");
break;
case 18:secondyear();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
}
void thirdyear()
{
int ch;
clrscr();
printf("\nEnter 1 for LAB1\n-----------------------------------------------------------------------\nEnter 2 for LAB2\n-----------------------------------------------------------------------");
printf("\n\n\n*enter 20 to exit:-\n");
scanf("%d",&ch);
if(ch==1)
{

printf("\n*LAB-1*");
printf("\n1.Moment of Inertia by Bifilar Suspension.");
printf("\n2.surface tension by Ferguson method.");
printf("\n3.surface tension by Quinke's method.");
printf("\n4.Hall effect.");
printf("\n5.Energy gap by four probe method.");
printf("\n6.Energy gap of semiconductor.");
printf("\n7.Michelson Interferometer.");
printf("\n8.Platinum resistance  Thermometer.");
printf("\n9.Determination of Planck's constant.");
printf("\n10.Resolving power of Grating.");
printf("\n11.Thermal conductivity by Forbe's Method.");
printf("\n12.Thermal conductivity of Rubber tube.");
printf("\n13.characteristics of GM counter.");
printf("\n14.verification of Stefan’s law.");
printf("\n15.Self inductance by Anderson Bridge.");
printf("\n16.Self Inductance by Maxwell’s Bridge.");
printf("\n\n*Enter the practical no whose apparatus you want to know.");
printf("\n*Enter 20 to exit.\n");
printf("\n*Enter 18 to previous page.\n");
apparatus3();
}
else if(ch==2)
{
printf("\n*LAB-2*");
printf("\n1.Characteristics of JFET.");
printf("\n2.Astable multi vibrator using IC555.");
printf("\n3.Frequency Response of Loudspeaker.");
printf("\n4.characteristics of laser beam (Divergence).");
printf("\n5.Determination of Diameter of thin wire.");
printf("\n6.Platinum Resistance Thermometer.");
printf("\n7.Diffraction Using Reflection grating (Metal Ruler.");
printf("\n8.Velocity of sound.");
printf("\n9.Determination of RC Time Constant.");
printf("\n10.I-V Characteristics of Diode.");
printf("\n11. a. Factorial of Number\n   b. Factorial using recursion.");
printf("\n12.Graphics(line, bar, rectangle, circle, ellipse");
printf("\n13.Roots of an algebraic equation(Bisection Method)");
printf("\n14.Roots of an algebraic equation(Newton-Raphson)");
printf("\n15.Display of 100 Prime Numbers");
printf("\n16.Trapezoidal and Simpson’s 1/3 Rule");
printf("\n\n*Enter the practical no whose apparatus you want to know.");
printf("\n*Enter 20 to exit.\n");
printf("\n*Enter 18 to previous page.\n");
apparatus4();
}
else
{
printf("\nIncorrect Choice");
}
}
void apparatus4()
{
int choice;
while(choice!=20)
{
scanf("%d",&choice);
clrscr();
switch(choice)
{
case 1:printf("\nApparatus:-\n-JFET(BFW10) C15\t\n-Voltmeter(0-5v)(0-20v) C20\t\t\t\n-Milli ammeter(0-50mA) C19\t\t\t\n-Dual power supply (+_12V)\t\t\t C12\n-connecting wire B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 2:printf("\nApparatus:-\n-Resistor(10Kohm) C7\n-Capacitor(0.1microF,0.01microF) C7\n-Power Supply(5V) C12\n-Ic555 C7\n-CRO A4\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 3:printf("\nApparatus:-\n-Loud speaker D\n-CRO A7\n-Function generator D\n-Amplifier D\n-microphone D.");
printf("\n\n\n*enter 20 to exit");
printf("\*enter 18 to previous page\n");
break;
case 4:printf("\nApparatus:-\n-Laser source (He-Ne) D\n-scale D.");
printf("\n\n\n*enter 20 to exit");
printf("\*enter 18 to previous page\n");
break;
case 5:printf("\nApparatus:-\n-He-Ne laser    D\n-Thin wire    B3/B2/B5 \n-screen D\n-translation stage etc D.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 6:printf("\nApparatus:-\n-PRT(platinum Resistance Thermometer) \n-Thermometer stand,\n-Hot Water bath\n-ice");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 7:printf("\nApparatus:-\n-Laser Source(He-Ne) D\n-Steel Scale D\n-A Slit.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 8:printf("\nApparatus:-\n-Piezo Disk\n-Microphone assembly\n-Expeyes kit");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 9:printf("\nApparatus:-\n-Capacitor(1microF) C7\n-Resistor(1Kohm) C7\n-Expeyes Kit\n-Connecting Wires B3/B2/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 10:printf("\nApparatus:-\n-Diode 1N4148 C7\n-Zener Diode(3.3V) C7\n-LED C7.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 11:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 12:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 13:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 14:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 15:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 16:printf("By Algorithmic Methods");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 17:printf("\nenter 20 to exit:");
break;
case 18:thirdyear();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
}
void apparatus3 ()
{
int AD;
while(AD!=17)
{
scanf("%d",&AD);
clrscr();
switch(AD)
{
case 1:printf("\nApparatus:-\n-Wooden Horizontal Frame D\n-Horizontal Bar D\n-Strong Thread D\n-Stopwatch C3\n-Metal Scale D\n-Vernier Callipers C4.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 2:printf("\nApparatus:-\n-Fergusson instrument B6\n-two types of capillary \n-travelling microscope C29.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 3:printf("\nApparatus:-\n-Mercury C29\n-Travelling Microscope C29\n-Spirit Level C4\n-Quincke's Apparatus  C29.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 4:printf("\nApparatus:-\n-Power Supply for Electromagnets\n-Gauss Meter constant Power supply\n-Ge crystal(n type)probe\n-Connecting Wires B2/B3/B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 5:printf("\nApparatus:-\n-4 Probe Apparatus\n-Thermometer\n-Germanium Sample.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 6:printf("\nApparatus:-\n-Ge or Si semiconductor germanium diode in reverse bias\n-Digital multi meter\tC8\n-2 cell box\n-Connecting Wire pot.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 7:printf("\nApparatus:-\n-Michelson's interferometer\tD\n-screen reading lamp\tD\n-magnifying glass\tC4\n-:Requirement: Dark Room\tD.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 8:printf("\nApparatus:-\n-PRT(platinum resistance thermometer)\n-Thermometer stand\n-Hot water bath\n-Ice.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 9:printf("\nApparatus:-\n-DC Regulator\n-Power Supply\tC12\n-Voltmeter\tC20\n-Resistor(1Kohm)\tC7\n-LED\tC7\n-Connecting Wire\tB2\B3\B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 10:printf("\nApparatus:-\n-A Spectrometer\tD\n-Sodium Lamp\tD\n-Diffraction Grating\tD\n-Various Rectangular Slits Provided with Micrometer arrangement.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 11:printf("\nApparatus:-\n-Probe's Apparatus\n-Thermometer(373K)\n-Simple Rod\n-Heater Coil.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 12:printf("\nApparatus:-\n-Rubber cube\n-Thermometer\n-Boiler\n-Stopwatch\tC3\n-Caloriemeter\n-Stirrer\n-Heater.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 13:printf("\nApparatus:-\n-Triode-Geiger counting system\n-GM tube\n-Radioactive source(Co60)\n-Connecting Wires\tB2\B3\B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 14:printf("\nApparatus:-\n-milliammeter\tC19\n-Bulb\tC7\n-Voltmeter\tC20\n-Connecting Wires\tB2\B3\B5.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 15:printf("\nApparatus:-\n-Single Decade Resistor(100*10ohm)\tC7\n-Three Decade Resistor(10*1000ohm,10*100ohm,10*10ohm)\tC7\n-Capacitor\tC7\n-Inductor(unknown)\tC7\n**Anderson Setup.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 16:printf("\nApparatus:-\n-Three Diodes\tC7\n-Resistor Diodes(10*100ohm,10*10ohm,10*1ohm)\C7\n-Single Decode resistance having value->10*100ohm\tC7.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 17:printf("\nenter 20 to exit:");
break;
case 18:thirdyear();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
}

void Stalk()

{
int ch;
clrscr();
printf("\nEnter 1 for Electronic Apparatus\n-----------------------------------------------------------------------\nEnter 2 for Instrumental Apparatus\n-----------------------------------------------------------------------");
printf("\n\n\n*enter 20 to exit:-\n");
scanf("%d",&ch);
if(ch==1)
{


printf("*electronic apparatus*\n");
printf("\n1.Bread Board\n");
printf("2.Voltmeter\n");
printf("3.Resistors1\n");
printf("4.Resistors2\n");
printf("5.Signal generator & Resistor3\n");
printf("6.Capacitors\n");
printf("7.Diode\n");
printf("8.Logic Gate\n");
printf("9.Trasistor chra. kit\n");
printf("10.temperature controller\n");
printf("11.soldering metal & wax\n");
printf("12.signal generators\n");
printf("13.JFET(BF_W10)\n");
printf("14.Resistance box & Rheostat\n");
printf("15.Piezo disk\n");
printf("16.Expeyes kit\n");
printf("\n\n*Enter the apparatus no whose stalk you want to know.");
printf("\n*Enter 20 to exit.\n");
apparatust();
}
else if(ch==2)
{
printf("*Instrumental Apparatus*\n");
printf("1.Bar Magnet\n");
printf("2.wooden scale\n");
printf("3.He-ne laser, laser Bench & prism\n");
printf("4.Weights,spring,Bob\n");
printf("5.Quincke's App & Plank con.& Kirchhoff’s law kit\n");
printf("6.Stop Watch\n");
printf("7.Vernier callipers & screw gauge\n");
printf("8.Hall Effect\n");
printf("9.CRO\n");
printf("10.Amplifier\n");
printf("11.Microphone\n");
printf("12.Travelling Microscope\n");
printf("13.spirit level\n");
printf("14.Thermometer\n");
printf("15.Rubber tube\n");
printf("16.sonometer App");
printf("\n\n*Enter the apparatus no whose stalk you want to know.");
printf("\n*Enter 20 to exit.\n");
apparatustv();
}
else
{
printf("\nIncorrect Choice");
}
}
void apparatust()
{
int choice;
while(choice!=20)
{
scanf("%d",&choice);
clrscr();
switch(choice)
{
case 1:printf("Apparatus:-\nBread Board\t\tTotal:9");
printf("Enter 20 to exit\n");
break;
case 2:printf("Apparatus:-\nTotal-20");
printf("Enter 20 to exit\n");
break;
case 3:printf("Address:C7\n\nResistor\n1.1Mohm\t\ttotal:7\n2.330ohm(1/2W)\t\ttotal:7\n3.220ohm(1/2W\t\ttotal:10\n4.1Kohm(1W)\t\ttotal:3\n5.150Kohm(1/2W\t\ttotal:10\n6.4K7ohm(1/2W)\t\ttotal:9\n7.47Kohm(1/2W\t\ttotal:7\n8.330Kohm(1/2W)\t\ttotal:9\n9.22Kohm(1/2W)\t\ttotal:10\n10.820ohm\t\ttotal:19\n11.220ohm(1/4W\t\ttotal:19\n12.100Kohm\t\ttotal:10\n13.560Kohm(1/2W)\t\ttotal:8\n14.470Kohm(1/2W\t\ttotal:10\n15.15Kohm(1/2W)\t\ttotal:10\n16.10Kohm(1/2W)\t\ttotal:9\n17.680Kohm(1/2W)\t\ttotal:8\n18.470ohm(1W)\t\ttotal:4");
printf("\nEnter 20 to exit\n");
break;
case 4:printf("Address:c7\n18.470ohm(1W)\t\ttotal:4\n19.1Kohm(5W)\t\ttotal:5\n20.82Kohm\t\ttotal:19\n21.560Kohm(2W)\t\ttotal:5\n22.470Kohm(1W)\t\ttotal:5\n23.10Kohm(1/4)\t\ttotal:9\n24.100Kohm\t\ttotal:7 \n25.820 ohm\t\ttotal:7\n26.6K8(1/4W)\t\ttotal:120\n27.33 Kohm\t\ttotal:5\n28.47 Kohm\t\ttotal:20\n29.470 Kohm(2W)\t\ttot:5\n30.15Kohm(1/4W)\t\ttotal:17\n31.4K7 (1W)\t\ttotal:5\n32.150 Kohm(1/4W)\t\ttotal:20");
printf("\nEnter 20 to exit\n");
break;
case 5:printf("Apparatus:\nsignal generator\t\tTotal-2\nResistor:-\n33.330Kohm(5W)\t\ttotal:4\n34.330 Kohm\t\ttotal:20\n35.5Kohm\t\ttotal:4\n36.100ohm(1/4w)\t\ttotal:8\n37.680 Kohm (1/4W)\t\ttotal:20\n38.33 Kohm(1/4W)\t\ttotal:17\n39.47 Kohm(2W)\t\ttotal:5\n40.2K2(2W)\t\ttotal:1\n41.330ohm (1/4W)\t\ttotal:17\n42.150ohm\t\ttotal:19\n43.470ohm (1/2W)\t\ttotal:5\n44.100K (5W)\t\ttotal:5 \n45.820K(2W)\t\ttotal:5\n46.100K(2W)\t\ttotal:5\n47.2K2(1/4W)\t\ttotal:20\n48.150KW(2W)\t\ttotal:5\n49.150Kohm(1W)\t\ttotal:5\n50.820ohm(1W)\t\ttotal:4");
printf("\nEnter 20 to exit\n");
break;
case 6:printf("Address:C15\n1.470 microF/25v\t\ttotal:8\n2.0.1microF\t\ttotal:3\n3.100microF/25v\t\ttotaal:9\n4.0.022microF\t\t10\n5.220microF/25v\t\ttotal:5\n6.1 micro F/63v\t\ttotal:8\n7.4.7 microF/63v\t\ttotal:9\n8.10microF/63v\t\ttotal:8\n9.330PF\t\ttotal:10\n10.22microF/25V\t\ttotal:8\n11.0.22 micro F\t\ttotal:10\n12.1000 micro F/25V\t\ttotal:3\n13.47 micro F/25V\t\total:4\n14.2200 micro F/16V\t\ttotal:5\n15.220 PF\t\ttotal:9\n16.0.047microF\t\ttotal:9\n17.100 PF\t\ttotal:10\n\n");
printf("\nEnter 20 to exit");
break;
case 7:printf("Address:C7\nDiode:-\n1.0A79 diode(Ge)\t\ttotal:2\n2.Zener diode 5.1W,1W\t\ttotal:5\n3.Photo diode\t\ttotal:5\n4.diode 4148\t\ttotal:37\n5.diode 4007\t\ttotal:3\n6.Zener diode 9.1V,1w\t\ttotal:10\n7.Zener diode 12v,1w\t\ttotal:8\n\n");
printf("Enter 20 to exit\n");
break;
case 8:printf("\nAddress:C27\nLogic Gate:-\n1.Ic 7404\t\ttotal:2\n2.Ic 7408\t\ttotal:8\n3.Ic 7490\t\ttotal:5\n4.Ic 7419\t\ttotal:1\n5.Ic 7447\t\ttotal:1\n6.Ic 7474\t\ttotal:1\n7.Ic 7476\t\ttotal:3\n8.Ic 7408\t\ttotal:12\n9.Ic 7432\t\ttotal:12\n10.Ic 7486\t\ttotal:3\n11.Ic 7400\t\ttotal:1\n\n");
printf("\nEnter 20 to exit\n");
break;
case 9:printf("Apparatus:-\nTotal-1\n");
printf("Enter 20 to exit\n");
break;
case 10:printf("Apparatus:-\nTotal-1\n");
printf("Enter 20 to exit\n");
break;
case 11:printf("Apparatus:-\ntotal-1\n");
printf("\nEnter 20 to exit\n");
break;
case 12:printf("Apparatus:-\nTotal-2\n");
printf("Enter 20 to exit\n");
break;
case 13:printf("Apparatus:-\nTotal-1\n");
printf("Enter 20 to exit\n");
break;
case 14:printf("Apparatus:-\nResistor box\t\tTotal-3\n-Rheostat\n1.(0 to 10 ohm)\t\total-2\n2.(0 to 120 ohm)\t\tTotal-1\n3.(0 to 1000 ohm)\t\tTotal-2\n4.(0 to 20)\t\tTotal-2");
printf("\nEnter 20 to exit\n");
break;
case 15:printf("Apparatus-\nTOtal-1\n");
printf("Enter 20 to exit\n");
break;
case 16:printf("Apparatus-\nTotal-1\n");
printf("Enter 20 to exit\n");
break;
case 17:printf("\n\n*enter 20 to exit:");
break;
case 18:Stalk();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
}
void apparatustv()
{
int DN;
while(DN!=16)
{
scanf("%d”, &DN);
clrscr();
switch(DN)
{

case 1:printf("Apparatus:-\nBar magnet\t\tTotal-3");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 2:printf("Apparatus:-\n-Total-10\t\tAddress:D");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 3:printf("Apparatus:-\n-He-Ne LASER\nTotal-3\n-Prism\n-total-4");
printf("\n\n\n*enter 20 to exit");
printf("\*enter 18 to previous page\n");
break;
case 4:printf("Apparatus:-\n-weights\nweights for sonometer\t\tTotal-1set\nweights slotted\t\tTotal-17\nweight box\t\tTotal-2 set\nspring\t\tTotal-2\nBob-\nTotal-5");
printf("\n\n\n*enter 20 to exit");
printf("\*enter 18 to previous page\n");
break;
case 5:printf("Apparatus:-\n-Quinke's app\nTotal-1\n-Plank cons.\nTotal-1\n-Kirchhoff’s law kit\nTotal-2");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 6:printf("Apparatus:-\n-stop watch\t\tTotal-10");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 7:printf("Apparatus:-\nvernier callipers\t\tTotal-5\nscrew gauge\t\tTotal-6");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 8:printf("Apparatus:-\nTotal-1");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 9:printf("Apparatus:-\ndual trace\t\tTotal-2\nsingle trace\t\tTotal-2\nCRO 30MhH\t\tTotal-1");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 10:printf("Apparatus:-\nTotal-4.");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 11:printf("Apparatus:-\nTotal-2");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 12:printf("Apparatus:-\nTotal-4");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 13:printf("Apparatus:-\nTotal-2");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 14:printf("Apparatus:-\nTotal-3");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 15:printf("Apparatus:-\nTotal-1");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 16:printf("Apparatus:-\nTotal-2");
printf("\n\n\n*enter 20 to exit");
printf("\n*enter 18 to previous page\n");
break;
case 17:printf("\nenter 20 to exit:");
break;
case 18:Stalk();
break;
case 19:printf("\nenter 20 to exit:");
break;
case 20:main();
break;

}
}
