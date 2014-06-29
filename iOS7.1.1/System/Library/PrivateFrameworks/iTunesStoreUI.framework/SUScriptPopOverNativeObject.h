/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {

	bool _redisplayAfterRotation;
	UIBarButtonItem* _sourceButtonItem;
	SUDOMElement* _sourceDOMElement;

}

@property (nonatomic,retain) UIBarButtonItem * sourceButtonItem;              //@synthesize sourceButtonItem=_sourceButtonItem - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceDOMElement;                 //@synthesize sourceDOMElement=_sourceDOMElement - In the implementation block
-(void)dealloc;
-(void)setSourceButtonItem:(id)arg1 ;
-(void)setSourceDOMElement:(id)arg1 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(id)sourceDOMElement;
-(bool)_isAffectedByWindowNotification:(id)arg1 ;
-(id)sourceButtonItem;
@end
