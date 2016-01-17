############################### reg2nsis begin #################################
# This NSIS-script was generated by the Reg2Nsis utility                       #
# Author  : Artem Zankovich                                                    #
# URL     : http://aarrtteemm.nm.ru                                            #
# Usage   : You can freely inserts this into your setup script as inline text  #
#           or include file with the help of !include directive.               #
#           Please don't remove this header.                                   #
################################################################################

WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "state" 40004200790074006500410072007200610079002800000000000000ff000000000000000000fd000000000000000200000000000000000000000000010007000000000002000900fc0002000000000000000700fb000000000000000c0000004c0000006500000067000000650000006e000000640001000000000000008c00000000000200090000000000000072000000ff00ff00ff00fb00000000000000100000004f00000076000000650000007200000076000000690000006500000077000000000000000100f4000000000000002a0000000000000014000000ff00ff00ff00fb0000000000000022000000430000006f0000006f0000007200000064000000690000006e000000610000007400000065000000430000006100000070000000740000007500000072000000650000000000000001007e00000000000000a000000000000000a1000000ff00ff00ff00fb0000000000000014000000550000006e000000640000006f0000005700000069000000640000006700000065000000740000000000000000000000ff00ff00ff00ff0000000000000000000000000000000000fb000000000000001a0000004f000000730000006d000000550000006e000000640000006f0000005200000065000000640000006f00000044000000570000000000000000000000ff00ff00ff00ff0000000000000000000000000000000000fb0000000000000008000000550000006e000000640000006f0000000000000000000000ff00ff00ff00ff00000000000000dc000000ff00ff00ff00fb000000000000002000000053000000680000006f000000720000007400000065000000730000007400000050000000610000007400000068000000440000006f000000630000006b0000000000000001007e00000000000100170000000000010017000000ff00ff00ff0000000000000001000000000001002f00000000000200b600fc0002000000000000000100fb00000000000000180000004f000000730000006d0000004600000065000000610000007400000075000000720000006500000044000000570000000000000000008d00000000000200b60000000000000000000000000000000000000000000300540000000000020009000000000000000100000000000000020000000000000001000000000000000200fc00000000000000070000000000000001000000000000000000000000000000020000000000000000000000000000000200000000000000000000000000000002000000000000000400000000000000180000006d00000046000000690000006c00000065000000540000006f0000006f0000006c0000004200000061000000720001000000000000000000ff00ff00ff00ff00000000000000000000000000000000000000000000001a0000006d0000004c00000061000000790000006500000072000000540000006f0000006f0000006c000000420000006100000072000100000000000000e000ff00ff00ff00ff0000000000000000000000000000000000000000000000200000006d0000004400000069000000670000006900000074000000690000007a00000065000000540000006f0000006f0000006c0000004200000061000000720001000000000002002900ff00ff00ff00ff0000000000000000000000000000000000000000000000180000006d00000048000000650000006c00000070000000540000006f0000006f0000006c0000004200000061000000720000000000000004002300ff00ff00ff00ff0000000000000000000000000000000000000000000000020000000000000004000000000000000a00000047000000520000004100000053000000530001000000000000000000ff00ff00ff00ff00000000000000000000000000000000000000000000001a0000006d0000004c0000006100000062000000650000006c000000540000006f0000006f0000006c0000004200000061000000720001000000000001006f00ff00ff00ff00ff00000000000000000000000000000000000000000000001c0000006d000000520000006100000073000000740000006500000072000000540000006f0000006f0000006c0000004200000061000000720001000000000002000900ff00ff00ff00ff00000000000000000000000000000000000000000000001c0000006d0000004d00000061000000700000004e0000006100000076000000540000006f0000006f0000006c0000004200000061000000720001000000000002005d0000000000020004000000000000000000000000000000000000000000000002000000000000000200000000000000300000006d000000410000006400000076000000610000006e0000006300000065000000640000004400000069000000670000006900000074000000690000007a00000065000000540000006f0000006f0000006c0000004200000061000000720001000000000000000000ff00ff00ff00ff0000000000000000000000000000000000000000000000240000006d00000041000000740000007400000072000000690000006200000075000000740000006500000073000000540000006f0000006f0000006c000000420000006100000072000100000000000100b200000000000200af0000000000000000000000000000000000000000000000030000000000000001000000000000001c0000006d000000500000006c0000007500000067000000690000006e000000540000006f0000006f0000006c0000004200000061000000720001000000000000000000ff00ff00ff00ff00000000000000000000000000000000002900
WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "geometry" 400042007900740065004100720072006100790028000100d900d000cb000000010000000000ff00ff00ff00fc00ff00ff00ff00fc000000000004006400000000000200f50000000000000000000000000000001400000000000400b40000000000010091000000000000000000020000002900
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "lastVectorFileFilter" "[OGR] ESRI Shapefiles (*.shp *.SHP)"
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "encoding" "System"
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "lastRasterFileFilter" "SAR_CEOS, CEOS, JAXAPALSAR, ELAS, AIG, OGDI, MEM, BSB, DIMAP, AirSAR, RS2, HDF4, HDF4Image, ISIS3, ISIS2, PDS, ERS, L1B, FIT, WCS, WMS, INGR, COSAR, TSX, DOQ1, DOQ2, ENVI, EHdr, GenBin, PAux, MFF2, FujiBAS, GSC, FAST, LAN, CPG, IDA, NDF, EIR, DIPEx, HTTP, HDF5Image and all other files (*)"
WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "recentProjections" 33003400350032000000330033003400340000000000
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "lastSaveAsImageFilter" "jpg format (*.jpg *.JPG);;"
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "lastSaveAsImageDir" "C:/tmp"
WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "recentProjectionsEpsg" 34003300320036000000340032003100310000000000
WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "recentProjectionsProj4" 2b00700072006f006a003d006c006f006e0067006c006100740020002b0065006c006c00700073003d005700470053003800340020002b0064006100740075006d003d005700470053003800340020002b006e006f005f00640065006600730000002b00700072006f006a003d006c006f006e0067006c006100740020002b0065006c006c00700073003d00620065007300730065006c0020002b006e006f005f00640065006600730000000000
WriteRegBin HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "recentProjectsList" 43003a002f0044006f00630075006d0065006e0074007300200061006e0064002000530065007400740069006e00670073002f00410064006d0069006e006900730074007200610074006f0072002f006700690064006100740061002f004c0061006e00640063006f007600650072002f006c0061006e00640063006f007600650072002e0071006700730000000000
WriteRegStr HKEY_CURRENT_USER "Software\QuantumGIS\QGIS\UI" "tileScaleEnabled" "false"

###############################  reg2nsis end  #################################
