

  /**
   * Use `Polymer.PaperInputAddonBehavior` to implement an add-on for `<paper-input-container>`. A
   * add-on appears below the input, and may display information based on the input value and
   * validity such as a character counter or an error message.
   * @polymerBehavior
   */
  Polymer.PaperInputAddonBehavior = {

    hostAttributes: {
      'add-on': ''
    },

    attached: function() {
      this.fire('addon-attached');
    },

    /**
     * The function called by `<paper-input-container>` when the input value or validity changes.
     * @param {Object} state All properties are optional.
     * @param {Node} state.inputElement The input element.
     * @param {String} state.value The input value.
     * @param {Boolean} state.invalid True if the input value is invalid.
     */
    update: function(state) {
    }

  };

