<Qucs Schematic 0.0.19>
<Properties>
  <View=-20,-180,1627,972,1,0,0>
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
  <GND * 1 210 490 0 0 0 0>
  <Lib OP1 1 700 310 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
  <Diode D_1N4148_1 1 550 250 -110 -26 0 3 "222p" 1 "1.65" 1 "4p" 0 "0.333" 0 "0.7" 0 "0.5" 0 "0" 0 "0" 0 "2" 0 "68.6m" 0 "5.76n" 0 "0" 0 "0" 0 "1" 0 "1" 0 "75" 0 "1u" 0 "26.85" 0 "3.0" 0 "1.11" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "26.85" 0 "1.0" 0 "normal" 0>
  <Diode D_1N4148_2 1 550 330 -110 -26 0 3 "222p" 1 "1.65" 1 "4p" 0 "0.333" 0 "0.7" 0 "0.5" 0 "0" 0 "0" 0 "2" 0 "68.6m" 0 "5.76n" 0 "0" 0 "0" 0 "1" 0 "1" 0 "75" 0 "1u" 0 "26.85" 0 "3.0" 0 "1.11" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "0.0" 0 "26.85" 0 "1.0" 0 "normal" 0>
  <Vdc V2 1 550 80 -64 -26 0 3 "15 V" 1>
  <Vdc V3 1 550 480 18 -26 0 1 "15 V" 1>
  <GND * 1 550 510 0 0 0 0>
  <GND * 1 810 230 0 0 0 0>
  <Vdc V4 1 740 240 -64 -26 0 3 "15 V" 1>
  <GND * 1 640 70 0 0 0 0>
  <R R6 1 660 450 15 -26 0 1 "50 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Vdc V5 1 840 380 -64 -26 0 3 "15 V" 1>
  <GND * 1 840 410 0 0 0 0>
  <R R1 1 340 210 -26 15 0 0 "15 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 340 290 -26 15 0 0 "15 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R3 1 340 370 -26 15 0 0 "15 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R4 1 550 140 15 -26 0 1 "75 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R5 1 550 420 15 -26 0 1 "75 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R7 1 760 140 -26 -53 0 2 "7.5 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 660 480 0 0 0 0>
  <Vrect V6 1 210 420 18 -26 0 1 "1 V" 1 "1 ms" 1 "1 ms" 1 "1 ns" 1 "1 ns" 1 "0 ns" 0>
  <.TR TR1 1 130 100 0 63 0 0 "lin" 1 "0" 1 "3 ms" 1 "11" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <.DC DC1 1 320 100 0 39 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
</Components>
<Wires>
  <290 290 310 290 "" 0 0 0 "">
  <290 290 290 370 "" 0 0 0 "">
  <290 370 310 370 "" 0 0 0 "">
  <290 210 290 290 "" 0 0 0 "">
  <290 210 310 210 "" 0 0 0 "">
  <370 290 550 290 "" 0 0 0 "">
  <550 280 550 290 "" 0 0 0 "">
  <370 210 550 210 "" 0 0 0 "">
  <550 210 550 220 "" 0 0 0 "">
  <550 360 550 370 "" 0 0 0 "">
  <370 370 550 370 "" 0 0 0 "">
  <550 290 550 300 "" 0 0 0 "">
  <550 370 550 390 "" 0 0 0 "">
  <550 170 550 210 "" 0 0 0 "">
  <550 270 550 280 "" 0 0 0 "">
  <550 270 650 270 "" 0 0 0 "">
  <810 200 810 230 "" 0 0 0 "">
  <740 200 810 200 "" 0 0 0 "">
  <740 200 740 210 "" 0 0 0 "">
  <790 310 850 310 "" 0 0 0 "">
  <650 270 660 270 "" 0 0 0 "">
  <650 140 650 270 "" 0 0 0 "">
  <650 140 730 140 "" 0 0 0 "">
  <850 140 850 310 "" 0 0 0 "">
  <790 140 850 140 "" 0 0 0 "">
  <640 50 640 70 "" 0 0 0 "">
  <550 50 640 50 "" 0 0 0 "">
  <660 350 660 420 "" 0 0 0 "">
  <740 350 840 350 "" 0 0 0 "">
  <210 450 210 490 "" 0 0 0 "">
  <210 290 290 290 "" 0 0 0 "">
  <210 290 210 390 "" 0 0 0 "">
  <850 310 850 310 "Uout" 880 280 0 "">
  <210 290 210 290 "Uin" 240 260 0 "">
</Wires>
<Diagrams>
  <Rect 969 489 500 445 3 #c0c0c0 1 00 1 0 0.0005 0.003 1 -2.5 0.5 1.31459 1 -1 0.2 1 315 0 225 "czas [s]" "napięcie [V]" "">
	<"Uout.Vt" #0000ff 0 3 0 0 0>
	<"Uin.Vt" #ff0000 0 3 0 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
