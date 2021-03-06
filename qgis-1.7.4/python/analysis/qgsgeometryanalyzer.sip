/** \ingroup analysis
 * The QGis class provides vector geometry analysis functions
 */

class QgsGeometryAnalyzer
{
%TypeHeaderCode
#include <qgsgeometryanalyzer.h>
%End

  public:

    /**
     * Simplify vector layer using (a modified) Douglas-Peucker algorithm
     * and write it to a new shape file
     */
    bool simplify( QgsVectorLayer* layer, const QString& shapefileName, double tolerance,
                 bool onlySelectedFeatures = false );

    /**Calculate the true centroids, or 'center of mass' for a vector layer and 
       write it to a new shape file
    */
    bool centroids( QgsVectorLayer* layer, const QString& shapefileName,
                 bool onlySelectedFeatures = false );

    /**Create a polygon based on the extent of all (selected) features and write it to a new shape file
    */
    bool extent( QgsVectorLayer* layer, const QString& shapefileName, 
                 bool onlySelectedFeatures = false );

    /**Create buffers for a vector layer and write it to a new shape file
    */
    bool buffer( QgsVectorLayer* layer, const QString& shapefileName, double bufferDistance,
                 bool onlySelectedFeatures = false, bool dissolve = false, 
                 int bufferDistanceField = -1 );

    /**Create convex hull(s) of a vector layer and write it to a new shape file
    */
    bool convexHull( QgsVectorLayer* layer, const QString& shapefileName, 
                     bool onlySelectedFeatures = false,
                     int uniqueIdField = -1 );

    /**Dissolve a vector layer and write it to a new shape file
    */
    bool dissolve( QgsVectorLayer* layer, const QString& shapefileName, 
                   bool onlySelectedFeatures = false,
                     int uniqueIdField = -1 );

  private:

    QList<double> simpleMeasure( QgsGeometry* geometry );
    double perimeterMeasure( QgsGeometry* geometry, QgsDistanceArea& measure );
    /**Helper function to simplify an individual feature*/
    void simplifyFeature( QgsFeature& f, QgsVectorFileWriter* vfw, double tolerance );
    /**Helper function to get the cetroid of an individual feature*/
    void centroidFeature( QgsFeature& f, QgsVectorFileWriter* vfw );
    /**Helper function to buffer an individual feature*/
    void bufferFeature( QgsFeature& f, int nProcessedFeatures, QgsVectorFileWriter* vfw, 
                        bool dissolve, QgsGeometry** dissolveGeometry,
                        double bufferDistance, int bufferDistanceField );
    /**Helper function to get the convex hull of feature(s)*/
    void convexFeature( QgsFeature& f, int nProcessedFeatures, 
                        QgsGeometry** dissolveGeometry );
    /**Helper function to dissolve feature(s)*/
    void dissolveFeature( QgsFeature& f, int nProcessedFeatures, 
                          QgsGeometry** dissolveGeometry );
};
