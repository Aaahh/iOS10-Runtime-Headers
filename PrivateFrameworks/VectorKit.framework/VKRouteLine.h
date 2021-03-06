/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteLine : NSObject {
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _bounds;
    double  _boundsInWorldUnit;
    double  _boundsUnitsPerMeter;
    bool  _hasNewRoadMatches;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _inverseMatrix;
    double  _lastTrafficTimeStamp;
    double  _lastUserLocationMatchTimestamp;
    bool  _matchToRoads;
    double  _metersPerPoint;
    <VKRouteLineObserverProtocol> * _observer;
    VKPolylineOverlay * _overlay;
    VKPolylineOverlayRenderRegion * _renderRegion;
    NSSet * _retainedTiles;
    struct vector<geo::fast_shared_ptr<md::RouteLineSection>, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection> > > { 
        struct fast_shared_ptr<md::RouteLineSection> {} *__begin_; 
        struct fast_shared_ptr<md::RouteLineSection> {} *__end_; 
        struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection> *, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection> > > { 
            struct fast_shared_ptr<md::RouteLineSection> {} *__first_; 
        } __end_cap_; 
    }  _sections;
    double  _simplificationEpsilonPoints;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _userLocation;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _userLocationIndex;
    struct fast_shared_ptr<md::RouteLineSection> { 
        struct _fast_shared_ptr_control {} *_control; 
    }  _userLocationSection;
    double  _viewUnitsPerPoint;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  bounds; /* unknown property attribute:  1>=[2d]}} */
@property bool hasNewRoadMatches;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic) <VKRouteLineObserverProtocol> *observer;
@property (nonatomic) VKPolylineOverlay *overlay;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<geo::fast_shared_ptr<md::RouteLineSection>' */ struct  sections; /* unknown property attribute:  std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection> > >=^{fast_shared_ptr<md::RouteLineSection>}}} */
@property (nonatomic) double simplificationEpsilonPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateBounds:(id)arg1;
- (void)_updateTilesCovered:(id)arg1;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })bounds;
- (bool)buildRouteLineForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 containerModel:(id)arg4 viewUnitsPerPoint:(double)arg5 force:(bool)arg6 selected:(bool)arg7;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)dealloc;
- (void)forEachSection:(id /* block */)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (bool)hasNewRoadMatches;
- (bool)isTrafficUpToDate;
- (bool)isTrafficUptoDate:(double)arg1;
- (bool)needsUpdate;
- (id)observer;
- (id)overlay;
- (struct vector<geo::fast_shared_ptr<md::RouteLineSection>, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection> > > { struct fast_shared_ptr<md::RouteLineSection> {} *x1; struct fast_shared_ptr<md::RouteLineSection> {} *x2; struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection> *, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection> > > { struct fast_shared_ptr<md::RouteLineSection> {} *x_3_1_1; } x3; })sections;
- (void)setHasNewRoadMatches:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setOverlay:(id)arg1;
- (void)setSimplificationEpsilonPoints:(double)arg1;
- (double)simplificationEpsilonPoints;
- (void)splitRouteLineAtAnnotation:(id)arg1;

@end
