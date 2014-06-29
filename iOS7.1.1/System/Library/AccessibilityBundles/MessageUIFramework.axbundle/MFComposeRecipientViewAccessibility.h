/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUIFramework/MessageUIFramework-Structs.h>
#import <MessageUIFramework/MFComposeRecipientViewAccessibility_super.h>

@interface MFComposeRecipientViewAccessibility : MFComposeRecipientViewAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)dragUpdated:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dragEntered:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dragStartedWithItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_reflowAnimated:(bool)arg1 ;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(bool)arg3 ;
-(void)removeRecipient:(id)arg1 ;
@end
