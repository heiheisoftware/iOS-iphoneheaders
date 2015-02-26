/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/MobileMail.axbundle/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/__MFApplicationSceneControllerAccessibility_super.h>

@interface MFApplicationSceneControllerAccessibility : __MFApplicationSceneControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityPrimaryViewController;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(void)_setActiveActorItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_accessibilityUpdateDraftElements;
-(id)_actorItemForActorViewController:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)tiltedTabViewDidPresent:(id)arg1 ;
-(void)tiltedTabViewDidDismiss:(id)arg1 ;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2 ;
-(void)_accessibilityUpdateDraftLabelForBorrowedView:(id)arg1 withActorAtIndex:(long long)arg2 ;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2 withBoundsInsets:(out UIEdgeInsets*)arg3 ;
-(id)_accessibilitySpeakThisViewController;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
