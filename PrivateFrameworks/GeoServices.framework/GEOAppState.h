/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAppState : PBCodable <NSCopying> {
    struct { 
        unsigned int zoomLevel : 1; 
        unsigned int transitNotAvailableAdvisoryShowing : 1; 
    }  _has;
    GEOMapRegion * _mapRegion;
    bool  _transitNotAvailableAdvisoryShowing;
    double  _zoomLevel;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) bool transitNotAvailableAdvisoryShowing;
@property (nonatomic) double zoomLevel;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasTransitNotAvailableAdvisoryShowing;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (void)setZoomLevel:(double)arg1;
- (bool)transitNotAvailableAdvisoryShowing;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end
