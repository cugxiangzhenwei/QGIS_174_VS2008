::copy include files
xcopy qgis-1.7.4\src\*.h D:\RsSrcDir\QGisDev\include\ /y /s
xcopy Build174\src\ui\*.h D:\RsSrcDir\QGisDev\include\ui\ /y /s

::copy lib files
xcopy Build174\src\core\debug\*.lib D:\RsSrcDir\QGisDev\lib\ /y /s
xcopy Build174\src\gui\debug\*.lib D:\RsSrcDir\QGisDev\lib\ /y /s

::copy bin files
xcopy Build174\src\core\debug\*.* D:\RsSrcDir\QGisDev\binD\ /y /s
xcopy Build174\src\gui\debug\*.* D:\RsSrcDir\QGisDev\binD\ /y /s

xcopy Build174\src\core\release\*.dll D:\RsSrcDir\QGisDev\binR\ /y /s
xcopy Build174\src\gui\release\*.dll D:\RsSrcDir\QGisDev\binR\ /y /s

::copy data privoids files
xcopy Build174\src\providers\gdal\debug\*.dll D:\RsSrcDir\QGisDev\binD\plugins\ /y /s
xcopy Build174\src\providers\ogr\debug\*.dll D:\RsSrcDir\QGisDev\binD\plugins\ /y /s

xcopy Build174\src\providers\gdal\release\*.dll D:\RsSrcDir\QGisDev\binR\plugins\ /y /s
xcopy Build174\src\providers\ogr\release\*.dll D:\RsSrcDir\QGisDev\binR\plugins\ /y /s

::copy to develope dir
xcopy D:\RsSrcDir\QGisDev\binD\*.* D:\RsSrcDir\bin\debug\ /y /s
xcopy D:\RsSrcDir\QGisDev\binR\*.* D:\RsSrcDir\bin\ /y /s