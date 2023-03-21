<Qucs Schematic 0.0.19>
<Properties>
  <View=-320,-280,1432,760,0.826446,0,0>
  <Grid=10,10,1>
  <DataSet=zad10.2-AC.dat>
  <DataDisplay=zad10.2-AC.dpl>
  <OpenDisplay=1>
  <Script=zad10.2-AC.m>
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
  <GND * 1 420 450 0 0 0 0>
  <OpAmp OP1 1 520 340 -26 -80 1 0 "1" 1 "15 V" 0>
  <GND * 1 230 240 0 0 0 0>
  <R R1 1 300 210 -26 15 0 0 "1 kOhm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 450 210 -26 15 0 0 "0 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 40 450 0 0 0 0>
  <Vac V1 1 40 410 18 -26 0 1 "1 V" 1 "1 GHz" 0 "0" 0 "0" 0>
  <R R3 1 150 360 -26 15 0 0 "R" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R4 1 340 360 -26 15 0 0 "R" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <C C2 1 420 390 17 -26 0 1 "C" 1 "" 0 "neutral" 0>
  <C C1 1 230 430 17 -26 0 1 "C" 1 "" 0 "neutral" 0>
  <.DC DC1 1 -50 -10 0 40 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Eqn Eqn1 1 160 0 -34 16 0 0 "R=1000" 1 "k=dB(Uout.v/Uin.v)" 1 "C=1/(10^6*R)" 1 "phase_rad=deg2rad(phase_degrees)" 1 "phase_degrees=phase(Uout.v/Uin.v)" 1 "yes" 0>
  <.AC AC1 1 -50 60 0 40 0 0 "log" 1 "1 Hz" 1 "10 GHz" 1 "70" 1 "no" 0>
</Components>
<Wires>
  <420 420 420 450 "" 0 0 0 "">
  <370 360 420 360 "U2" 450 330 50 "">
  <560 340 560 490 "" 0 0 0 "">
  <230 490 560 490 "" 0 0 0 "">
  <230 460 230 490 "" 0 0 0 "">
  <230 360 230 400 "" 0 0 0 "">
  <230 360 310 360 "" 0 0 0 "">
  <230 210 230 240 "" 0 0 0 "">
  <230 210 270 210 "" 0 0 0 "">
  <330 210 330 320 "U3" 360 280 103 "">
  <330 320 490 320 "" 0 0 0 "">
  <330 210 420 210 "" 0 0 0 "">
  <480 210 560 210 "" 0 0 0 "">
  <560 210 560 340 "" 0 0 0 "">
  <180 360 230 360 "" 0 0 0 "">
  <40 360 120 360 "Uin" 90 330 45 "">
  <40 360 40 380 "" 0 0 0 "">
  <40 440 40 450 "" 0 0 0 "">
  <420 360 490 360 "" 0 0 0 "">
  <560 340 560 340 "Uout" 590 310 0 "">
  <230 360 230 360 "U1" 260 330 0 "">
</Wires>
<Diagrams>
  <Rect 654 684 591 397 3 #c0c0c0 1 10 1 1 1 1e+10 1 -200 50 17.9988 1 -3.5 0.5 0.314138 315 0 225 "częstotliwość [Hz]" "faza [deg]" "faza [rad]">
	<"phase_degrees" #0000ff 0 3 0 0 0>
	<"phase_rad" #ff0000 0 3 0 0 1>
  </Rect>
  <Rect 657 232 602 372 3 #c0c0c0 1 10 1 1 1 1e+10 1 -217.141 50 13.1721 1 -1 0.2 1 315 0 225 "częstotliwość [Hz]" "wzmocnienie [dB]" "">
	<"k" #0000ff 0 3 0 0 0>
	  <Mkr 2154.43 21 -321 3 0 0>
	  <Mkr 84632.3 363 -362 3 0 0>
	  <Mkr 6.48029e+06 435 -304 3 0 0>
	  <Mkr 6.70019e+07 237 -133 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
