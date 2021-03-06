//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAnnotationView.h"

#import "QOverlay-Protocol.h"

@class JDReactMap, NSArray, NSString, QPolygon, QPolygonView, UIColor;

@interface JDReactMapPolygon : QAnnotationView <QOverlay>
{
    int _lineCap;
    int _lineJoin;
    JDReactMap *_map;
    QPolygon *_polygon;
    QPolygonView *_renderer;
    NSArray *_interiorPolygons;
    NSArray *_coordinates;
    NSArray *_holes;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _strokeWidth;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    CDUnknownBlockType _onPress;
}

@property(copy, nonatomic) CDUnknownBlockType onPress; // @synthesize onPress=_onPress;
@property(retain, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSArray *holes; // @synthesize holes=_holes;
@property(retain, nonatomic) NSArray *coordinates; // @synthesize coordinates=_coordinates;
@property(retain, nonatomic) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
@property(retain, nonatomic) QPolygonView *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) QPolygon *polygon; // @synthesize polygon=_polygon;
@property(nonatomic) __weak JDReactMap *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (_Bool)canReplaceMapContent;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)update;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

