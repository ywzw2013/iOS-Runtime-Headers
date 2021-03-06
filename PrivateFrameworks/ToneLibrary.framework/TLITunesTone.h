/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLITunesTone : NSObject {
    NSString * _artworkFile;
    unsigned int  _duration;
    NSString * _filePath;
    NSString * _identifier;
    NSString * _name;
    NSNumber * _pid;
    NSDictionary * _playbackProperties;
    BOOL  _private;
    BOOL  _protected;
    BOOL  _purchased;
    BOOL  _ringtone;
}

@property (nonatomic, readonly) NSString *artworkFile;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *pid;
@property (nonatomic, readonly) NSDictionary *playbackProperties;
@property (getter=isPrivate, nonatomic, readonly) BOOL private;
@property (getter=isProtected, nonatomic, readonly) BOOL protected;
@property (getter=isPurchased, nonatomic, readonly) BOOL purchased;
@property (getter=isRingtone, nonatomic, readonly) BOOL ringtone;

- (void).cxx_destruct;
- (id)artworkFile;
- (unsigned int)duration;
- (id)filePath;
- (id)identifier;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (BOOL)isPrivate;
- (BOOL)isProtected;
- (BOOL)isPurchased;
- (BOOL)isRingtone;
- (id)name;
- (id)pid;
- (id)playbackProperties;

@end
