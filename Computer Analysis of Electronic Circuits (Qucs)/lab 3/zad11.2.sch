<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-180,1493,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=zad11.1.dat>
  <DataDisplay=zad11.1.dpl>
  <OpenDisplay=1>
  <Script=zad11.1.m>
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
  <GND * 1 570 420 0 0 0 0>
  <Lib OP1 1 630 220 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
  <GND * 1 720 360 0 0 0 0>
  <Vdc V3 1 670 310 18 -26 1 3 "15 V" 1>
  <Vdc V4 1 670 150 18 -26 1 3 "15 V" 1>
  <R R4 1 640 60 -26 -53 0 2 "10 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 640 120 0 0 0 0>
  <Vdc V1 1 380 330 18 -26 0 1 "1 V" 1>
  <GND * 1 380 360 0 0 0 0>
  <R R5 1 470 60 -26 15 0 0 "1 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R1 1 470 180 -26 15 0 0 "5 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R3 1 570 390 15 -26 0 1 "770" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <.DC DC1 1 180 100 0 39 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Vdc V5 1 390 100 18 -26 0 1 "U" 1>
  <GND * 1 390 130 0 0 0 0>
  <.SW SW1 1 180 190 0 63 0 0 "DC1" 1 "lin" 1 "U" 1 "0 V" 1 "1.5 V" 1 "50" 1>
</Components>
<Wires>
  <570 260 570 360 "" 0 0 0 "">
  <570 260 590 260 "" 0 0 0 "">
  <500 180 550 180 "" 0 0 0 "">
  <550 180 590 180 "" 0 0 0 "">
  <720 220 750 220 "" 0 0 0 "">
  <670 260 670 280 "" 0 0 0 "">
  <670 340 670 360 "" 0 0 0 "">
  <670 360 720 360 "" 0 0 0 "">
  <550 60 550 180 "" 0 0 0 "">
  <550 60 610 60 "" 0 0 0 "">
  <750 60 750 220 "Uout" 780 180 149 "">
  <670 60 750 60 "" 0 0 0 "">
  <670 90 670 120 "" 0 0 0 "">
  <640 90 640 120 "" 0 0 0 "">
  <640 90 670 90 "" 0 0 0 "">
  <380 180 440 180 "" 0 0 0 "">
  <380 180 380 300 "Uin" 410 150 0 "">
  <500 60 550 60 "" 0 0 0 "">
  <390 60 390 70 "" 0 0 0 "">
  <390 60 440 60 "" 0 0 0 "">
</Wires>
<Diagrams>
  <Rect 868 415 484 355 3 #c0c0c0 1 00 1 0 0.2 1 1 -0.1 0.5 1.1 1 -0.1 0.5 1.1 315 0 225 "" "" "">
	<"Uout.V" #0000ff 0 3 0 0 0>
	  <Mkr 0 105 -351 3 0 0>
	  <Mkr 1.19388 377 -191 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>