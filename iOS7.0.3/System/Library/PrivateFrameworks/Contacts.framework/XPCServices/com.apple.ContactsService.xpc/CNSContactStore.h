/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/XPCServices/com.apple.ContactsService.xpc/com.apple.ContactsService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNXContactStore.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>

@interface CNSContactStore : NSObject <CNXContactStore, NSXPCListenerDelegate>
+(id)sharedStore;
-(id)_valuesForProperty:(int)arg1 record:(void*)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)allContacts:(/*^block*/ id)arg1 ;
@end
