/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MFMailboxUid, NSString;

@interface MailboxHierarchyNode : NSObject {

	NSMutableArray* _children;
	MFMailboxUid* _mailbox;
	MFMailboxUid* _parentMailbox;
	NSString* _displayName;
	int _level;

}

@property (retain) MFMailboxUid * parentMailbox;              //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSString *)displayName;
-(void)setParentMailbox:(MFMailboxUid *)arg1 ;
-(id)removeNodeForMailbox:(id)arg1 ;
-(MFMailboxUid *)parentMailbox;
-(id)_findNodeForMailbox:(id)arg1 removeNode:(char)arg2 ;
-(id)findNodeForMailbox:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(void)addChild:(id)arg1 ;
-(id)children;
@end
