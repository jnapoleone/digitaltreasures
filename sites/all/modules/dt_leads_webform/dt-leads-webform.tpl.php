<div>
  <div id="messages" class="alert alert-success" data-ng-show="messages" data-ng-bind="messages"></div>
  <form novalidate class="dt-leads__form" name="leadsForm" data-ng-submit="submitForm(leadsForm.$valid)" action="https://crm.zoho.com/crm/WebToLeadForm" name=WebToLeads178597000000048007 method="POST" onSubmit="javascript:document.charset=\"UTF-8\";" accept-charset="UTF-8">
    <input type="hidden" name="xnQsjsdp" value=EfEyMGDXLbk$/>
    <input type="hidden" name="xmIwtLD" value=*nl06dMnyEqOOxTacc5oZQw1vyXgS1pG/>
    <input type="hidden" name="actionType" value=TGVhZHM=/>
    <input type="hidden" name="returnURL" value="<?php print $url; ?>" />
    <input type='hidden' maxlength="20" name="Lead Source" value="<?php print $title; ?>"/>
    <div class="dt-leads__item--first-name">
      <span class="dt-leads__item--help" data-ng-show="leadsForm.firstName.$invalid && !leadsForm.firstName.$pristine">Required</span>
      <label class="dt-leads__label" for="First Name" >First name: <span class="dt-leads__item--required">*</span></label>
      <input class="dt-leads__textfield" data-ng-model="firstName" data-ng-minlength="2" type="text" name="First Name" placeholder="First Name (required)" required />
    </div>
    <div class="dt-leads__item--last-name">
      <span class="dt-leads__item--help" data-ng-show="leadsForm.lastName.$invalid && !leadsForm.lastName.$pristine">Required</span>
      <label class="dt-leads__label" for="Last Name">Last name: <span class="dt-leads__item--required">*</span></label>
      <input class="dt-leads__textfield" data-ng-model="lastName" data-ng-minlength="2" type="text" name="Last Name" placeholder="Last Name (required)" required />
    </div>
    <div class="dt-leads__item--email">
      <span class="dt-leads__item--help" data-ng-show="leadsForm.Email.$invalid && !leadsForm.Email.$pristine">E.g. user@domain.com</span>
      <label class="dt-leads__label" for="Email">E-mail address: <span class="dt-leads__item--required">*</span></label>
      <input class="dt-leads__textfield" data-ng-model="email" data-ng-pattern="/[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*@(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?/" type="email" name="Email" placeholder="E-mail address (required)" required />
    </div>
    <div class="dt-leads__item--phone">
      <span class="dt-leads__item--help" data-ng-show="leadsForm.Phone.$invalid && !leadsForm.Phone.$pristine">E.g (555) 555-5555</span>
      <label class="dt-leads__label" for="Phone">Phone number:</label>
      <input class="dt-leads__textfield" data-ng-model="phone" data-ng-pattern="/\(?[2-9]\d\d\)?[ -]?[2-9]\d\d-?\d{4}/" type="text" name="Phone" placeholder="E.g. (555) 555-5555" />
    </div>
    <div class="dt-leads__item--description">
      <label class="dt-leads__label" for="Description">Question:</label>
      <textarea class="dt-leads__textarea" data-ng-model="description" name="Description" placeholder="Type your question here"></textarea>
    </div>

    <div class="dt-leads__item--trap">
      <label class="" for="">Ignore</label>
      <div>Do not fill out the following field, its purpose is to trap spam bots and it will invalidate the form and not allow you to submit it. *Furthermore if you see this message it is because your browser does not support CSS.</div>
      <input type="text" data-ng-model="trap" data-ng-pattern="/\A\z/" name="trap" placeholder="Trap" />
    </div>
    <div class="dt-leads__item--submit">
      <input class="dt-leads__submit form-submit" data-ng-disabled="leadsForm.$invalid" type="submit" title="Send" value="Send" />
    </div>
  </form>
</div>
