/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/_MFInteractiveAnimating.h>

@class MFApplicationSceneController, NSString, _MFActorItemView, UIView, NSUUID;

@interface _MFActorItem : NSObject <_MFInteractiveAnimating> {

	MFApplicationSceneController* _hostSceneController;
	UIViewController* _viewController;
	id _resurrectionIdentifier;
	NSString* _identificationString;
	_MFActorItemView* _containerView;
	char _snapshotViewNeedsUpdate;
	char _isPurged;
	UIView* _subviewToSnapshot;
	NSUUID* _snapshotIdentifier;

}

@property (assign,nonatomic,__weak) MFApplicationSceneController * hostSceneController;                //@synthesize hostSceneController=_hostSceneController - In the implementation block
@property (getter=isPurged,nonatomic,readonly) char purged;                                            //@synthesize isPurged=_isPurged - In the implementation block
@property (nonatomic,retain) id resurrectionIdentifier;                                                //@synthesize resurrectionIdentifier=_resurrectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identificationString;                                            //@synthesize identificationString=_identificationString - In the implementation block
@property (nonatomic,readonly) _MFActorItemView * view;                                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIViewController*<MFApplicationSceneActor> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * subviewToSnapshot;                                        //@synthesize subviewToSnapshot=_subviewToSnapshot - In the implementation block
@property (nonatomic,readonly) NSUUID * snapshotIdentifier;                                            //@synthesize snapshotIdentifier=_snapshotIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)continueInteractiveAnimation;
-(id)initWithActorViewController:(id)arg1 ;
-(void)setHostSceneController:(MFApplicationSceneController *)arg1 ;
-(void)setDimmingIntensity:(float)arg1 animated:(char)arg2 ;
-(void)setNeedsSnapshotUpdateNow:(char)arg1 ;
-(char)isPurged;
-(void)populateIdentificationString;
-(NSUUID *)snapshotIdentifier;
-(CGImageRef)snapshotContents;
-(id)resurrectionIdentifier;
-(void)setResurrectionIdentifier:(id)arg1 ;
-(NSString *)identificationString;
-(void)setIdentificationString:(NSString *)arg1 ;
-(void)setSnapshotContents:(CGImageRef)arg1 withIdentifier:(id)arg2 ;
-(void)startInteractiveAnimation;
-(void)setAnimationProgress:(float)arg1 ;
-(void)actorViewControllerWasPurged;
-(void)actorViewControllerWasResurrectedWithViewController:(id)arg1 ;
-(void)returnBorrowedView:(id)arg1 ;
-(float)dimmingIntensity;
-(id)generateSnapshotView;
-(id)_generateSnapshotViewWithSubview:(id)arg1 ;
-(UIView *)subviewToSnapshot;
-(MFApplicationSceneController *)hostSceneController;
-(void)setSubviewToSnapshot:(UIView *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(_MFActorItemView *)view;
-(id)snapshotView;
-(UIViewController*<MFApplicationSceneActor>)viewController;
-(void)finishInteractiveAnimation;
-(void)cancelInteractiveAnimation;
-(void)_setViewController:(UIViewController*)arg1 ;
-(void)setSnapshotView:(id)arg1 ;
@end

