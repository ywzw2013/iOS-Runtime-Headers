/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (nonatomic) int actionDelayInSeconds;
@property (nonatomic, retain) SAUIColor *bodyBackgroundColor;
@property (nonatomic, retain) SAUIColor *countdownTextColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUIColor *headerBackgroundColor;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) SAUIColor *headerTextColor;
@property (readonly) Class superclass;

+ (id)countdownTimerItem;
+ (id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (int)actionDelayInSeconds;
- (id)bodyBackgroundColor;
- (id)countdownTextColor;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headerBackgroundColor;
- (id)headerText;
- (id)headerTextColor;
- (void)setAction:(id)arg1;
- (void)setActionDelayInSeconds:(int)arg1;
- (void)setBodyBackgroundColor:(id)arg1;
- (void)setCountdownTextColor:(id)arg1;
- (void)setHeaderBackgroundColor:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextColor:(id)arg1;

@end
