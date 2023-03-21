<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-321,1665,798,0.826446,0,0>
  <Grid=10,10,1>
  <DataSet=5.1.dat>
  <DataDisplay=5.1.dpl>
  <OpenDisplay=1>
  <Script=5.1.m>
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
  <.AC AC1 1 120 -100 0 40 0 0 "log" 1 "1 GHz" 1 "10 GHz" 1 "40" 1 "no" 0>
  <.DC DC1 1 120 50 0 40 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <.SW SW1 1 300 -100 0 65 0 0 "AC1" 1 "log" 1 "g" 1 "1" 1 "10e9" 1 "151" 1>
  <GND * 1 200 420 0 0 0 0>
  <Vac V1 1 200 320 18 -26 0 1 "1 V" 1 "1 GHz" 0 "0" 0 "0" 0>
  <OpAmp OP1 1 350 230 -26 -98 1 0 "g" 1 "15 V" 1>
  <Eqn Eqn1 1 150 140 -34 16 0 0 "k=dB(Uout.v/Uin.v)" 1 "yes" 0>
</Components>
<Wires>
  <200 350 200 420 "" 0 0 0 "">
  <200 250 200 290 "" 0 0 0 "">
  <200 250 320 250 "" 0 0 0 "">
  <290 210 320 210 "" 0 0 0 "">
  <390 230 440 230 "Uout" 460 200 42 "">
  <290 130 290 210 "" 0 0 0 "">
  <290 130 440 130 "" 0 0 0 "">
  <440 130 440 230 "" 0 0 0 "">
  <200 250 200 250 "Uin" 140 230 0 "">
</Wires>
<Diagrams>
  <Rect 597 477 428 304 3 #c0c0c0 1 10 1 1e+09 1 1e+10 1 -6.62266 1 0.60206 1 -1 0.2 1 315 0 225 "frequency [Hz]" "K [dB]" "">
	<"k" #0000ff 0 3 0 0 0>
	  <Mkr 2.03092e+09/1e+10 -272 -191 3 0 0>
	  <Mkr 5.87802e+09/1 494 -212 3 0 0>
	  <Mkr 8.88624e+09/2.51189 486 -304 3 0 0>
	  <Mkr 8.88624e+09/3.98107 476 -397 3 0 0>
	  <Mkr 8.88624e+09/8.57696 476 -500 3 0 0>
  </Rect>
  <Rect 590 108 432 264 3 #c0c0c0 1 10 1 0 1e+09 1e+10 1 -1 0.5 1 1 -1 0.5 1 315 0 225 "" "" "">
	<"Uout.V" #0000ff 0 3 0 4 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
