/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UIKeyInput.h>

@class NSArray, UILabel, UIBarButtonItem, UIActivityIndicatorView, NSString;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput> {

	char _requiresKeyboard;
	NSArray* _toolbarItems;
	UILabel* _currentResultLabel;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	UIActivityIndicatorView* _indicatorView;
	char _useActivityView;
	char _usesNarrowLayout;

}

@property (assign,nonatomic) char useActivityView;                                       //@synthesize useActivityView=_useActivityView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(int)panelType;
-(int)pausesPages;
-(char)ignoresPrivateBrowsingStyle;
-(char)shouldHideOnSuspend;
-(void)_updateUsesNarrowLayout;
-(void)setUsesNarrowLayout:(char)arg1 forceUpdateUI:(char)arg2 ;
-(id)findTextField;
-(char)_willShowActivityIndicator;
-(void)setRequiresKeyboard:(char)arg1 ;
-(id)_currentResultLabel;
-(void)setUseActivityView:(char)arg1 ;
-(char)useActivityView;
-(char)shouldShowToolbarInFullscreen;
-(char)canBecomeFirstResponder;
-(char)_requiresKeyboardWhenFirstResponder;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)toolbarItems;
-(id)inputAccessoryView;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)updateUI;
-(void)_done;
@end

