/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDCanvasDelegate <NSObject>
@optional
-(bool)isCanvasInteractive;
-(bool)shouldSuppressBackgrounds;
-(bool)spellCheckingSupported;
-(bool)spellCheckingSuppressed;
-(bool)isPrintingCanvas;
-(bool)shouldShowTextOverflowGlyphs;
-(bool)shouldShowInstructionalText;
-(void)canvasLayoutInvalidated:(id)arg1;
-(void)canvasWillLayout:(id)arg1;
-(void)canvasDidValidateLayouts:(id)arg1;
-(void)canvasDidLayout:(id)arg1;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
-(void)canvasDidUpdateVisibleBounds:(id)arg1;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1;
-(CGRect*)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
-(id)additionalVisibleInfosForCanvas:(id)arg1;
-(id)infosToHideForCanvas:(id)arg1;
-(void)canvas:(id)arg1 createdRep:(id)arg2;
-(bool)isCanvasDrawingIntoPDF:(id)arg1;
-(bool)supportsAdaptiveLayout;

@required
-(id)documentRoot;
@end
