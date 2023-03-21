<Qucs Schematic 0.0.19>
<Properties>
  <View=-20,-329,1644,884,0.826447,0,0>
  <Grid=10,10,1>
  <DataSet=zad9-jump.dat>
  <DataDisplay=zad9-jump.dpl>
  <OpenDisplay=1>
  <Script=zad9-jump.m>
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
  <GND * 1 630 450 0 0 0 0>
  <C C1 1 630 390 17 -26 0 1 "1 pF" 1 "" 0 "neutral" 0>
  <OpAmp OP1 1 730 340 -26 -80 1 0 "1" 1 "15 V" 0>
  <C C2 1 440 430 17 -26 0 1 "1 pF" 1 "" 0 "neutral" 0>
  <GND * 1 440 240 0 0 0 0>
  <R R5 1 660 210 -26 15 0 0 "0 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <.DC DC1 1 240 50 0 41 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <GND * 1 250 470 0 0 0 0>
  <Vpulse V1 1 250 410 18 -26 0 1 "0 V" 1 "1 V" 1 "0" 1 "1 ms" 1 "1 ns" 0 "1 ns" 0>
  <.TR TR1 1 240 140 0 65 0 0 "lin" 1 "0" 1 "2 ms" 1 "11" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <R R4 1 490 210 -26 15 0 0 "1 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 550 360 -26 15 0 0 "1 M" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R3 1 360 360 -26 15 0 0 "1 M" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
</Components>
<Wires>
  <630 420 630 450 "" 0 0 0 "">
  <630 360 700 360 "" 0 0 0 "">
  <580 360 630 360 "" 0 0 0 "">
  <770 340 770 490 "" 0 0 0 "">
  <440 490 770 490 "" 0 0 0 "">
  <440 460 440 490 "" 0 0 0 "">
  <440 360 440 400 "" 0 0 0 "">
  <440 360 520 360 "" 0 0 0 "">
  <540 210 540 320 "U3" 570 280 103 "">
  <540 320 700 320 "" 0 0 0 "">
  <540 210 630 210 "" 0 0 0 "">
  <690 210 770 210 "" 0 0 0 "">
  <770 210 770 340 "Uout" 800 280 97 "">
  <390 360 440 360 "" 0 0 0 "">
  <250 360 330 360 "Uin" 260 320 45 "">
  <250 360 250 380 "" 0 0 0 "">
  <250 440 250 470 "" 0 0 0 "">
  <520 210 540 210 "" 0 0 0 "">
  <440 210 440 240 "" 0 0 0 "">
  <440 210 460 210 "" 0 0 0 "">
  <630 360 630 360 "U2" 660 330 0 "">
  <440 360 440 360 "U1" 470 330 0 "">
</Wires>
<Diagrams>
  <Rect 919 480 718 474 3 #c0c0c0 1 00 1 0 0.0002 0.002 1 -0.1 0.2 1.1 1 -1 0.2 1 315 0 225 "czas [s]" "napięcie [V]" "">
	<"Uin.Vt" #0000ff 0 3 0 0 0>
	<"Uout.Vt" #ff0000 0 3 0 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>