/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {

	NSError* _error;

}

@property (readonly) long long code; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSString * localizedFailureReason; 
@property (readonly) NSString * localizedRecoverySuggestion; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedRecoverySuggestion;
-(NSString *)localizedFailureReason;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithError:(id)arg1 ;
-(id)attributeKeys;
@end
