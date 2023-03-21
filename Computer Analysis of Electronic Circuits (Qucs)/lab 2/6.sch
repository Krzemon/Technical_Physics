<Qucs Schematic 0.0.19>
<Properties>
  <View=0,60,1657,1216,1,72,80>
  <Grid=10,10,1>
  <DataSet=6.dat>
  <DataDisplay=6.dpl>
  <OpenDisplay=1>
  <Script=6.m>
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
  <Vac V1 1 260 480 18 -26 0 1 "1 V" 1 "1 GHz" 0 "0" 0 "0" 0>
  <GND * 1 260 540 0 0 0 0>
  <GND * 1 420 540 0 0 0 0>
  <OpAmp OP1 1 600 380 -26 -80 1 0 "1e6" 1 "15 V" 0>
  <C C1 1 340 410 -26 17 0 0 "C1" 1 "" 0 "neutral" 0>
  <R R2 1 420 470 15 -26 0 1 "5 kOhm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Eqn Eqn1 1 270 610 -34 16 0 0 "fd=10 k" 1 "fg=10 M" 1 "tau_d=1/(2*pi*fd)" 1 "tau_g=1/(2*pi*fg)" 1 "yes" 0>
  <GND * 1 810 450 0 0 0 0>
  <R R3 1 730 380 -26 15 0 0 "5 kOhm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <C C2 1 810 420 17 -26 0 1 "C2" 1 "" 0 "neutral" 0>
  <.AC AC1 1 950 360 0 39 0 0 "log" 1 "1 " 1 "100 GHz" 1 "70" 1 "no" 0>
  <.DC DC1 1 950 280 0 39 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Eqn Eqn2 1 260 740 -34 16 0 0 "C1=tau_d/R2.R" 1 "C2=tau_g/R3.R" 1 "k=dB(Uout.v/Uin.v)" 1 "ph=phase(Uout.v/Uin.v)" 1 "ph_rad=deg2rad(ph)" 1 "yes" 0>
</Components>
<Wires>
  <420 410 420 440 "" 0 0 0 "">
  <370 410 420 410 "" 0 0 0 "">
  <260 410 310 410 "Uin" 251 370 15 "">
  <260 410 260 450 "" 0 0 0 "">
  <260 510 260 540 "" 0 0 0 "">
  <420 500 420 540 "" 0 0 0 "">
  <570 400 570 410 "" 0 0 0 "">
  <420 410 570 410 "" 0 0 0 "">
  <640 380 700 380 "" 0 0 0 "">
  <520 360 570 360 "" 0 0 0 "">
  <700 290 700 380 "" 0 0 0 "">
  <520 290 700 290 "" 0 0 0 "">
  <520 290 520 360 "" 0 0 0 "">
  <760 380 810 380 "" 0 0 0 "">
  <810 380 810 390 "" 0 0 0 "">
  <810 380 810 380 "Uout" 840 350 0 "">
</Wires>
<Diagrams>
  <Rect 510 867 445 337 3 #c0c0c0 1 10 1 1 1 1e+11 1 -87.9991 20 7.98979 1 -1 0.5 1 315 0 225 "częstotliwość [Hz]" "wzmocnienie [dB]" "">
	<"k" #0000ff 0 3 0 0 0>
	  <Mkr 379936 166 -379 3 0 0>
	  <Mkr 9671.8 -9 -348 3 0 0>
	  <Mkr 1.03393e+07 307 -343 3 0 0>
	  <Mkr 1069.02 118 -189 3 0 0>
  </Rect>
  <Rect 1030 867 559 337 3 #c0c0c0 1 10 1 1 1 1e+11 1 -107.993 50 107.993 1 -1 0.5 1 315 0 225 "częstotliwość [Hz]" "faza [deg]" "faza [rad]">
	<"ph" #0000ff 0 3 0 0 0>
	<"ph_rad" #ff0000 0 3 0 0 1>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
