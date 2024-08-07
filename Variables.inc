[Variables]

;-- FONTS --

Font=Century Gothic
;Font=GeosansLight

fontSize=12
fontSizeSmaller=10

;-- COLORS --

amber500=255,193,7
amber900=255,111,0

blue500=86,119,252
blue900=42,54,177

bluegrey500=96,125,139
bluegrey900=38,50,56

brown500=121,85,72
brown900=62,39,35

cyan500=0,188,212
cyan900=0,96,100

deeporange500=255,87,34
deeporange900=191,54,12

deeppurple500=103,58,183
deeppurple900=49,27,146

green500Alpha=37,155,36,100
green500=37,155,36
green900=13,83,2

grey50BrightAlpha=255,255,255,100
grey50DarkAlpha=255,255,255,30
grey50=250,250,250
grey200=238,238,238
grey300=190,190,190
grey500=96,125,139
grey900Alpha=33,33,33,100
grey900=33,33,33,200

indigo500=63,81,181
indigo900=26,35,126

lightblue500=3,169,244
lightblue800=2,119,189
lightblue900=1,87,155

lightgreen500=139,195,74
lightgreen900=51,105,30

lime500=205,220,57
lime900=130,119,23

orange500=255,152,0
orange900=230,81,0

pink500=233,30,99
pink900=136,14,79

purple500=156,39,176
purple900=74,20,140

red500=229,28,35
red900=176,18,10

teal500=0,150,136
teal900=0,77,64

yellow500=255,235,59
yellow800=249,168,37
yellow900=245,127,23

;-- USER OPTIONS --

textColor=255,255,255
textColorDark=#grey50BrightAlpha#
barBGColor=#grey50DarkAlpha#
highlightColor=#grey50BrightAlpha#
dataColor=#lightgreen900#
bgColor=#grey900#
circleColor=#grey300#
pingURL="www.borstihd.de"


;-- Network Adapter --
NetworkAdapterNumber=Best

;-- DOWN-/UPLOAD SPEED --
;Set these for sure
;http://speedtest.net
MaxDownloadMbits=50
MaxUploadMbits=6


;------------------------
;------ SSDdash ---------
;------------------------

;-- DISK NAMES --
D1=C:
D2=D:
D3=E:
D4=F:
D5=G:
D6=H:
D7=I:
D8=Q:

;-- Meter Bar --
barX=80
barY=55r
barLength=190
barHeight=30

;-- Label --
labelX=40
labelY=5r

;-- Percentage --
percentageX=320
percentageY=0r

;-- GB Label --
gbLabelX=100
gbLabelY=3r
gbLabelLength=150
gbLabelHeight=20

;-- Status Label --
lifeX=40
lifeY=30r

;------------------------
;------- HWiNFO ---------
;------------------------

; CPU - Power Usage
HWiNFO-CPU-SensorId-Power=0xf0002a00
HWiNFO-CPU-SensorInstance=0x0
HWiNFO-CPU-PowerUsage=0x5000000


; CPU - Usage/Clock
HWiNFO-CPU-SensorId=0xf0000300
HWiNFO-CPU-Usage=0x7000021
HWiNFO-CPU-Core0=0x7000000
HWiNFO-CPU-Core0Clock=0x6000000
HWiNFO-CPU-Core1=0x7000002
HWiNFO-CPU-Core1Clock=0x6000001
HWiNFO-CPU-Core2=0x7000004
HWiNFO-CPU-Core2Clock=0x6000002
HWiNFO-CPU-Core3=0x7000006
HWiNFO-CPU-Core3Clock=0x6000003
HWiNFO-CPU-Core4=0x7000008
HWiNFO-CPU-Core4Clock=0x6000004
HWiNFO-CPU-Core5=0x700000a
HWiNFO-CPU-Core5Clock=0x6000005
HWiNFO-CPU-Core6=0x700000c
HWiNFO-CPU-Core6Clock=0x6000006
HWiNFO-CPU-Core7=0x700000e
HWiNFO-CPU-Core7Clock=0x6000007

; CPU - DTS / Temp
HWiNFO-CPU-SensorId-DTS=0xf0000400
HWiNFO-CPU-Core0Temp=0x1000000
HWiNFO-CPU-Core1Temp=0x1000001
HWiNFO-CPU-Core2Temp=0x1000002
HWiNFO-CPU-Core3Temp=0x1000003
HWiNFO-CPU-Core4Temp=0x1000004
HWiNFO-CPU-Core5Temp=0x1000005
HWiNFO-CPU-Core6Temp=0x1000006
HWiNFO-CPU-Core7Temp=0x1000007

; Motherboard
HWiNFO-MOBO-SensorId=0xf0008689
HWiNFO-MOBO-SensorInstance=0x0
HWiNFO-MOBO-CPU-Fan=0x3000001
HWiNFO-MOBO-PUMP-Fan=0x3000004
HWiNFO-MOBO-SYS1-Fan=0x3000001

; GPU 1
HWiNFO-GPU0-SensorId=0xe0002000
HWiNFO-GPU0-SensorInstance=0x14
HWiNFO-GPU0-Usage=0x7000000
; HWiNFO-GPU0-TotalGPUPower=0x80000fa
HWiNFO-GPU0-Temp=0x1000000
HWiNFO-GPU0-VRAM=0x80000fd
HWiNFO-GPU0-VRAMUsage=0x7000001
HWiNFO-GPU0-VRAMClock=0x6000004
HWiNFO-GPU0-Fan0=0x8000000
HWiNFO-GPU0-Fan1=0x8000001
HWiNFO-GPU0-Power=0x5000000
HWiNFO-GPU0-CoreClock=0x6000000
; HWiNFO-GPU0-Voltage=0x2000000

; C: SSD970 1TB NVMe - Drive 1 + 3
HWiNFO-SSD970-1TB-SensorId=0xf0000100
HWiNFO-SSD970-1TB-SensorInstance=0x3
HWiNFO-SSD970-1TB-Life=0x7000000
HWiNFO-SSD970-1TB-Temp=0x1000000
HWiNFO-SSD970-1TB-Warning=0x8000001
HWiNFO-SSD970-1TB-Failure=0x8000000
HWiNFO-SSD970-1TB-Drive-SensorId=0xf0000101
HWiNFO-SSD970-1TB-Drive-SensorInstance=0x3
HWiNFO-SSD970-1TB-Drive-Read=0x8000000
HWiNFO-SSD970-1TB-Drive-Write=0x8000001
HWiNFO-SSD970-1TB-Drive-Total-Read=0x8000002
HWiNFO-SSD970-1TB-Drive-Total-Write=0x8000003

; D: ST4000VN008 4TB - Drive 2
HWiNFO-ST4000-4TB-SensorId=0xf0000100
HWiNFO-ST4000-4TB-SensorInstance=0x0
HWiNFO-ST4000-4TB-Life=0
HWiNFO-ST4000-4TB-Temp=0x1000000
HWiNFO-ST4000-4TB-Warning=0x8000001
HWiNFO-ST4000-4TB-Failure=0x8000000
HWiNFO-ST4000-4TB-Drive-SensorId=0xf0000101
HWiNFO-ST4000-4TB-Drive-SensorInstance=0x0
HWiNFO-ST4000-4TB-Drive-Read=0x8000000
HWiNFO-ST4000-4TB-Drive-Write=0x8000001
HWiNFO-ST4000-4TB-Drive-Total-Read=0x8000002
HWiNFO-ST4000-4TB-Drive-Total-Write=0x8000003

; F: SSD860 1TB - Drive 4
HWiNFO-SSD860-1TB-SensorId=0xf0000100
HWiNFO-SSD860-1TB-SensorInstance=0x1
HWiNFO-SSD860-1TB-Life=0x7000000
HWiNFO-SSD860-1TB-Temp=0x1000001
HWiNFO-SSD860-1TB-Warning=0x8000001
HWiNFO-SSD860-1TB-Failure=0x8000000
HWiNFO-SSD860-1TB-Drive-SensorId=0xf0000101
HWiNFO-SSD860-1TB-Drive-SensorInstance=0x1
HWiNFO-SSD860-1TB-Drive-Read=0x8000000
HWiNFO-SSD860-1TB-Drive-Write=0x8000001
HWiNFO-SSD860-1TB-Drive-Total-Read=0x8000002
HWiNFO-SSD860-1TB-Drive-Total-Write=0x8000003

; G: SSD990 2 TB - Drive 5
HWiNFO-SSD990-2TB-SensorId=0xf0000100
HWiNFO-SSD990-2TB-SensorInstance=0x2
HWiNFO-SSD990-2TB-Life=0x7000000
HWiNFO-SSD990-2TB-Temp=0x1000000
HWiNFO-SSD990-2TB-Warning=0x8000001
HWiNFO-SSD990-2TB-Failure=0x8000000
HWiNFO-SSD990-2TB-Drive-SensorId=0xf0000101
HWiNFO-SSD990-2TB-Drive-SensorInstance=0x2
HWiNFO-SSD990-2TB-Drive-Read=0x8000000
HWiNFO-SSD990-2TB-Drive-Write=0x8000001
HWiNFO-SSD990-2TB-Drive-Total-Read=0x8000002
HWiNFO-SSD990-2TB-Drive-Total-Write=0x8000003

; F: SSD950 500 GB - Drive 6
HWiNFO-SSD950-500GB-SensorId=0xf0000100
HWiNFO-SSD950-500GB-SensorInstance=0x4
HWiNFO-SSD950-500GB-Life=0x7000000
HWiNFO-SSD950-500GB-Temp=0x1000000
HWiNFO-SSD950-500GB-Warning=0x8000001
HWiNFO-SSD950-500GB-Failure=0x8000000
HWiNFO-SSD950-500GB-Drive-SensorId=0xf0000101
HWiNFO-SSD950-500GB-Drive-SensorInstance=0x4
HWiNFO-SSD950-500GB-Drive-Read=0x8000000
HWiNFO-SSD950-500GB-Drive-Write=0x8000001
HWiNFO-SSD950-500GB-Drive-Total-Read=0x8000002
HWiNFO-SSD950-500GB-Drive-Total-Write=0x8000003

;-- WEATHER --
;Edit these variables to show your weather Correctly. Don't forget PostfixUnit!
WeatherCode=GMXX5719
;'m' for Celcius, 'f' for Fahrenheit.
Unit=m
;Please make PostFixUnit a CAPITAL, so that it shows up correctly. C or F.
PostFixUnit=C

Substitute="tornado":"Tornado","Tornado":"Tornado","tropical":"tropischer","Tropical":"tropischer","storm":"Sturm","Storm":"Sturm","severe":"heftiges","Severe":"heftiges","thunderstorms":"Gewitter","Thunderstorms":"Gewitter","mixed":"gemischter","Mixed":"gemischter","rain":"Regen","Rain":"Regen","and":"und","And":"und","snow":"Schnee","Snow":"Schnee","sleet":"Graupel","Sleet":"Graupel","freezing":"gefrierender","Freezing":"gefrierender","drizzle":"Nieselregen","Drizzle":"Nieselregen","snow showers":"Schneeschauer","Snow showers":"Schneeschauer","shower":"Schauer","Shower":"Schauer"," flurries":"wirbel","light":"leichter","Light":"leichter","blowing":"st�rmischer","Blowing":"st�rmischer","hail":"Hagel","Hail":"Hagel","dust":"Staub","Dust":"Staub","foggy":"Nebel","Foggy":"Nebel","haze":"Dunst","Haze":"Dunst","smoky":"Rauch","Smoky":"Rauch","blustery":"Toben","Blustery":"Toben","windy":"Wind","Windy":"Wind","cold":"kalt","Cold":"kalt","Cloudy":"bew�lkt","cloudy":"bew�lkt","mostly":"meist","Mostly":"meist","(night)":"nachts","(day)":"(tags)","clear":"klar","Clear":"klar","sunny":"sonnig","Sunny":"sonnig","fair":"angenehm","Fair":"Angenehm","hot":"heiss","Hot":"Heiss","isolated":"vereinzelt","Isolated":"Vereinzelt","scatterd":"h�ufige","Scatterd":"H�ufige","heavy":"heftiger","Heavy":"Heftiger","partly":"teilweise","Partly":"Teilweise","thundershowers":"Gewitterregen","Thundershowers":"Gewitterregen","in the p.m.":"am Abend","in the a.m.":"am Morgen","with a few":"mit ein paar","A little":"Ein wenig","mainly early":"vorwiegend fr�h","mainly later":"vorwiegend sp�t","A bit of morning":"Ein wenig Morgen-","chilly":"frostig","with a little":"mit ein wenig","Remaining":"Es bleibt","very":"sehr","Chilly":"Frostig"
SubstituteDay="Monday":"Montag","Tuesday":"Dienstag","Wednesday":"Mittwoch","Thursday":"Donnerstag","Friday":"Freitag","Saturday":"Samstag","Sunday":"Sonntag"