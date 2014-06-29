/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCameraEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(bool)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(bool)arg2;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(bool)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(bool)arg2 animated:(bool)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(bool)arg2;
@end
