::copy include files
xcopy qgis-1.7.4\src\*.h QGisDev\include\ /y /s
xcopy Build174\src\ui\*.h QGisDev\include\ui\ /y /s

::copy lib files
xcopy Build174\src\core\debug\*.lib QGisDev\lib\ /y /s
xcopy Build174\src\gui\debug\*.lib QGisDev\lib\ /y /s

::copy bin files
xcopy Build174\src\core\debug\*.* QGisDev\binD\ /y /s
xcopy Build174\src\gui\debug\*.* QGisDev\binD\ /y /s

xcopy Build174\src\core\release\*.dll QGisDev\binR\ /y /s
xcopy Build174\src\gui\release\*.dll QGisDev\binR\ /y /s

::copy data privoids files
xcopy Build174\src\providers\gdal\debug\*.dll QGisDev\binD\plugins\ /y /s
xcopy Build174\src\providers\ogr\debug\*.dll QGisDev\binD\plugins\ /y /s

xcopy Build174\src\providers\gdal\release\*.dll QGisDev\binR\plugins\ /y /s
xcopy Build174\src\providers\ogr\release\*.dll QGisDev\binR\plugins\ /y /s
                 
