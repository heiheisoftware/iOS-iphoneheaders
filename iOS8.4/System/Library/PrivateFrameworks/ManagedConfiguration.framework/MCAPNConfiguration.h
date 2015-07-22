/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNConfiguration : NSObject {

	NSString* _name;
	NSString* _username;
	NSString* _password;
	NSString* _proxyServer;
	NSNumber* _proxyPort;
	NSString* _authenticationType;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                     //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;                       //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain) NSString * authenticationType;              //@synthesize authenticationType=_authenticationType - In the implementation block
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(NSString *)authenticationType;
-(id)localizedAuthenticationType;
-(NSString *)proxyServer;
-(NSNumber *)proxyPort;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(NSString *)username;
@end
