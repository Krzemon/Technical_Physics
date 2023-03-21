<Qucs Schematic 0.0.19>
<Properties>
  <View=-80,-360,1864,878,0.826446,0,0>
  <Grid=10,10,1>
  <DataSet=zad12.1.dat>
  <DataDisplay=zad12.1.dpl>
  <OpenDisplay=1>
  <Script=zad12.1.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <Diode D_1N4148_1 1 380 100 -26 -70 0 2 "222p" 1 "1.65" 1 "4p" 0 "0.333" 0 "0.7" 0 "0.5" 0 "0" 0 "0" 0 "2" 0 "68.6m" 0 "5.76n" 0 "0" 0 "0" 0 "1" 0 "1" 0 "75" 0 "1u" 0 "26.85" 0 "3.0" 0 "1.11" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "26.85" 0 "1.0" 0 "normal" 0>
  <GND * 1 350 290 0 0 0 0>
  <Vdc V4 1 490 350 -64 -26 0 3 "15 V" 1>
  <Vdc V3 1 490 150 -64 -26 0 3 "15 V" 1>
  <GND * 1 530 130 0 0 0 0>
  <GND * 1 490 380 0 0 0 0>
  <GND * 1 200 370 0 0 0 0>
  <R R1 1 270 190 -26 15 0 0 "10 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <.DC DC1 1 30 80 0 40 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <.SW SW1 1 30 150 0 65 0 0 "DC1" 1 "log" 1 "U1" 1 "10 mV" 1 "10 V" 1 "70" 1>
  <Vdc V7 1 200 300 18 -26 0 1 "U1" 1>
  <Lib OP2 1 770 210 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
  <Vdc V6 1 810 140 -64 -26 0 3 "15 V" 1>
  <GND * 1 850 100 0 0 0 0>
  <Vdc V5 1 810 320 -64 -26 0 3 "15 V" 1>
  <GND * 1 810 350 0 0 0 0>
  <R R2 1 700 170 -26 15 0 0 "1 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R3 1 810 40 -26 15 0 0 "9.1 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 640 190 0 0 0 0>
  <Lib OP1 1 450 250 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
</Components>
<Wires>
  <490 120 530 120 "" 0 0 0 "">
  <530 120 530 130 "" 0 0 0 "">
  <300 190 320 190 "" 0 0 0 "">
  <240 190 240 270 "" 0 0 0 "">
  <200 270 240 270 "" 0 0 0 "">
  <200 330 200 370 "" 0 0 0 "">
  <320 100 320 190 "" 0 0 0 "">
  <320 100 350 100 "" 0 0 0 "">
  <410 100 570 100 "" 0 0 0 "">
  <570 100 570 230 "" 0 0 0 "">
  <570 230 570 250 "" 0 0 0 "">
  <570 250 730 250 "Uout1" 610 300 110 "">
  <730 40 730 170 "" 0 0 0 "">
  <730 40 780 40 "" 0 0 0 "">
  <860 210 920 210 "" 0 0 0 "">
  <920 40 920 210 "Uout2" 900 250 166 "">
  <840 40 920 40 "" 0 0 0 "">
  <810 100 810 110 "" 0 0 0 "">
  <810 100 850 100 "" 0 0 0 "">
  <810 250 810 290 "" 0 0 0 "">
  <810 290 810 350 "" 0 0 0 "">
  <640 170 670 170 "" 0 0 0 "">
  <640 170 640 190 "" 0 0 0 "">
  <490 290 490 320 "" 0 0 0 "">
  <490 180 490 210 "" 0 0 0 "">
  <540 230 570 230 "" 0 0 0 "">
  <540 230 540 250 "" 0 0 0 "">
  <350 290 410 290 "" 0 0 0 "">
  <320 190 410 190 "" 0 0 0 "">
  <410 190 410 210 "" 0 0 0 "">
  <200 270 200 270 "Uin" 160 240 0 "">
</Wires>
<Diagrams>
  <Rect 1060 341 518 394 3 #c0c0c0 1 10 1 0.01 1 10 1 -0.837406 0.5 1.5 1 -1 0.2 1 315 0 225 "napięcie U1 [V]" "" "">
	<"Uout2.V" #0000ff 0 3 0 0 0>
	  <Mkr 0.1 180 -328 3 0 0>
	  <Mkr 1 435 -167 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>