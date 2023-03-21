<Qucs Schematic 0.0.19>
<Properties>
  <View=58,-40,1439,568,0.909091,0,0>
  <Grid=10,10,1>
  <DataSet=zad3.dat>
  <DataDisplay=zad3.dpl>
  <OpenDisplay=1>
  <Script=zad3.m>
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
  <GND * 1 440 290 0 0 0 0>
  <Vac V1 1 140 200 -26 18 0 0 "220 V" 1 "1 GHz" 0 "0" 0 "0" 0>
  <GND * 1 110 330 0 0 0 0>
  <Eqn Eqn1 1 630 180 -34 16 0 0 "G=dB(Uo.v/Ui.v)" 1 "yes" 0>
  <.AC AC1 1 200 280 0 40 0 0 "log" 1 "50 kHz" 1 "300 kHz" 1 "78" 1 "no" 0>
  <Eqn Eqn2 1 630 270 -34 16 0 0 "Ph=phase(Uo.v/Ui.v)" 1 "yes" 0>
  <R R1 1 270 200 -26 15 0 0 "3 kOhm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <C C1 1 440 260 17 -26 0 1 "1 nF" 1 "" 0 "neutral" 0>
</Components>
<Wires>
  <440 200 440 230 "" 0 0 0 "">
  <300 200 440 200 "" 0 0 0 "">
  <440 200 510 200 "Uo" 480 130 36 "">
  <170 200 240 200 "Ui" 180 120 22 "">
  <110 200 110 330 "" 0 0 0 "">
</Wires>
<Diagrams>
  <Rect 1110 320 240 160 3 #c0c0c0 1 10 1 1000 1 300000 1 -100 50 0 1 -1 1 1 315 0 225 "" "" "">
	<"Ph" #0000ff 0 3 0 0 0>
	  <Mkr 52382 95 -253 3 0 0>
  </Rect>
  <Rect 770 320 240 160 3 #c0c0c0 1 10 1 1000 1 300000 1 -40 20 3.33819 1 -1 1 1 315 0 225 "" "" "">
	<"G" #0000ff 0 3 0 0 0>
	  <Mkr 52382 101 -262 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
